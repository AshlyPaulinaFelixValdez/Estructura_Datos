(() => {
  const emojis = { X: '😺', O: '🐾' };
  const wins = [
    [0,1,2], [3,4,5], [6,7,8], // filas
    [0,3,6], [1,4,7], [2,5,8], // columnas
    [0,4,8], [2,4,6]           // diagonales
  ];

  const cells = Array.from(document.querySelectorAll('.cell'));
  const turnoEl = document.getElementById('jugador');
  const msgEl = document.getElementById('mensajeFinal');
  const vsCpuEl = document.getElementById('vsCpu');
  const btnReiniciar = document.getElementById('btnReiniciar');
  const btnResetMarcador = document.getElementById('btnResetMarcador');
  const scoreXEl = document.getElementById('scoreX');
  const scoreOEl = document.getElementById('scoreO');
  const scoreTEl = document.getElementById('scoreT');

  const state = {
    board: Array(9).fill(null),
    current: 'X',
    vsCPU: false,
    gameOver: false,
    scores: { X: 0, O: 0, T: 0 }
  };

  // Cargar marcador desde localStorage si existe
  try {
    const saved = JSON.parse(localStorage.getItem('gatito_scores'));
    if (saved && typeof saved === 'object') state.scores = { ...state.scores, ...saved };
  } catch (_) {}
  updateScores();

  // Eventos
  cells.forEach(btn => {
    btn.addEventListener('click', () => handleMove(parseInt(btn.dataset.index, 10)));
    btn.addEventListener('keydown', (e) => { if (e.key === 'Enter' || e.key === ' ') { e.preventDefault(); btn.click(); }});
  });
  btnReiniciar.addEventListener('click', resetBoard);
  btnResetMarcador.addEventListener('click', () => { state.scores = { X:0, O:0, T:0 }; persistScores(); updateScores(); resetBoard(); });
  vsCpuEl.addEventListener('change', () => { state.vsCPU = vsCpuEl.checked; resetBoard(); });

  function handleMove(i) {
    if (state.gameOver || state.board[i]) return;
    place(i, state.current);
    const result = evaluate();
    if (result.done) return endGame(result);

    if (state.vsCPU && state.current === 'O') {
      // Turno de la CPU: pequeña pausa para sensación natural
      setTimeout(() => {
        const move = chooseCpuMove();
        if (move != null) place(move, 'O');
        const r2 = evaluate();
        if (r2.done) return endGame(r2);
      }, 220);
    }
  }

  function place(i, player) {
    state.board[i] = player;
    const btn = cells[i];
    btn.textContent = emojis[player];
    btn.classList.add(player.toLowerCase());
    btn.disabled = true;
    // Cambiar turno
    state.current = player === 'X' ? 'O' : 'X';
    turnoEl.textContent = emojis[state.current];
  }

  function evaluate() {
    // ¿Hay ganador?
    for (const line of wins) {
      const [a,b,c] = line;
      const v = state.board[a];
      if (v && v === state.board[b] && v === state.board[c]) {
        line.forEach(idx => cells[idx].classList.add('win'));
        cells.forEach(c => c.disabled = true);
        state.gameOver = true;
        return { done: true, winner: v, line };
      }
    }
    // ¿Empate?
    if (state.board.every(Boolean)) {
      state.gameOver = true;
      return { done: true, tie: true };
    }
    return { done: false };
  }

  function endGame(result) {
    if (result.winner) {
      const who = result.winner;
      msgEl.textContent = `¡Ganó ${emojis[who]}!`;
      state.scores[who] += 1;
    } else {
      msgEl.textContent = '¡Empate! 🤝';
      state.scores.T += 1;
    }
    msgEl.classList.remove('oculto');
    persistScores();
    updateScores();
  }

  function updateScores() {
    scoreXEl.textContent = String(state.scores.X);
    scoreOEl.textContent = String(state.scores.O);
    scoreTEl.textContent = String(state.scores.T);
  }

  function persistScores() {
    try { localStorage.setItem('gatito_scores', JSON.stringify(state.scores)); } catch (_) {}
  }

  function resetBoard() {
    state.board.fill(null);
    state.current = 'X';
    state.gameOver = false;
    msgEl.classList.add('oculto');
    cells.forEach(btn => {
      btn.textContent = '';
      btn.classList.remove('x', 'o', 'win');
      btn.disabled = false;
    });
    turnoEl.textContent = emojis[state.current];
  }

  // CPU simple: centro > esquinas > laterales
  function chooseCpuMove() {
    // Centro
    if (!state.board[4]) return 4;
    // ¿Hay jugada ganadora inmediata o para bloquear?
    const immediate = findImmediate('O') ?? findImmediate('X');
    if (immediate != null) return immediate;
    // Esquinas
    const corners = [0,2,6,8].filter(i => !state.board[i]);
    if (corners.length) return corners[Math.floor(Math.random() * corners.length)];
    // Laterales
    const sides = [1,3,5,7].filter(i => !state.board[i]);
    if (sides.length) return sides[Math.floor(Math.random() * sides.length)];
    // Si no hay
    return null;
  }

  function findImmediate(player) {
    for (const [a,b,c] of wins) {
      const line = [state.board[a], state.board[b], state.board[c]];
      const empties = [a,b,c].filter((_, idx) => line[idx] == null);
      const curr = [a,b,c].filter((_, idx) => line[idx] === player);
      if (empties.length === 1 && curr.length === 2) return empties[0];
    }
    return null;
  }
})();

