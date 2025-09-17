using System;

class Conecta4
{
    static int filas = 6;
    static int columnas = 7;
    static char[,] tablero = new char[filas, columnas];

    static void Main()
    {
        InicializarTablero();
        char jugador = 'X';
        bool jugando = true;

        while (jugando)
        {
            MostrarTablero();
            Console.WriteLine($"Turno del jugador {jugador}");
            Console.Write("Elige columna (0-6): ");
            int col;

            if (int.TryParse(Console.ReadLine(), out col) && col >= 0 && col < columnas)
            {
                if (InsertarFicha(col, jugador))
                {
                    if (VerificarGanador(jugador))
                    {
                        MostrarTablero();
                        Console.WriteLine($"¡Jugador {jugador} gana!");
                        jugando = false;
                    }
                    else
                    {
                        jugador = (jugador == 'X') ? 'O' : 'X'; // cambiar de jugador
                    }
                }
                else
                {
                    Console.WriteLine("Columna llena, intenta otra.");
                }
            }
            else
            {
                Console.WriteLine("Entrada inválida, elige entre 0 y 6.");
            }
        }
    }

    static void InicializarTablero()
    {
        for (int f = 0; f < filas; f++)
            for (int c = 0; c < columnas; c++)
                tablero[f, c] = '.';
    }

    static void MostrarTablero()
    {
        Console.Clear();
        for (int f = 0; f < filas; f++)
        {
            for (int c = 0; c < columnas; c++)
            {
                Console.Write(tablero[f, c] + " ");
            }
            Console.WriteLine();
        }
        Console.WriteLine("0 1 2 3 4 5 6");
    }

    static bool InsertarFicha(int col, char jugador)
    {
        for (int f = filas - 1; f >= 0; f--)
        {
            if (tablero[f, col] == '.')
            {
                tablero[f, col] = jugador;
                return true;
            }
        }
        return false;
    }

    static bool VerificarGanador(char jugador)
    {
        // horizontal
        for (int f = 0; f < filas; f++)
            for (int c = 0; c < columnas - 3; c++)
                if (tablero[f, c] == jugador && tablero[f, c + 1] == jugador &&
                    tablero[f, c + 2] == jugador && tablero[f, c + 3] == jugador)
                    return true;

        // vertical
        for (int f = 0; f < filas - 3; f++)
            for (int c = 0; c < columnas; c++)
                if (tablero[f, c] == jugador && tablero[f + 1, c] == jugador &&
                    tablero[f + 2, c] == jugador && tablero[f + 3, c] == jugador)
                    return true;

        // diagonal derecha
        for (int f = 0; f < filas - 3; f++)
            for (int c = 0; c < columnas - 3; c++)
                if (tablero[f, c] == jugador && tablero[f + 1, c + 1] == jugador &&
                    tablero[f + 2, c + 2] == jugador && tablero[f + 3, c + 3] == jugador)
                    return true;

        // diagonal izquierda
        for (int f = 0; f < filas - 3; f++)
            for (int c = 3; c < columnas; c++)
                if (tablero[f, c] == jugador && tablero[f + 1, c - 1] == jugador &&
                    tablero[f + 2, c - 2] == jugador && tablero[f + 3, c - 3] == jugador)
                    return true;

        return false;
    }
}
