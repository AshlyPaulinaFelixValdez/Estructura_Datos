// generar arreglo con nums aleatorios
let arr = Array.from({length: 10}, () => Math.floor(Math.random() * 100) + 1);
console.log("Números random: ", arr);

// ordenamiento de selección
for (let i = 0; i < arr.length; i++) {
    let minIdx = i;
    for (let j = i + 1; j < arr.length; j++) {
        if (arr[j] < arr[minIdx]) {
            minIdx = j;
        }
    }
    [arr[i], arr[minIdx]] = [arr[minIdx], arr[i]];
}

console.log("Números random ordenados: ", arr);