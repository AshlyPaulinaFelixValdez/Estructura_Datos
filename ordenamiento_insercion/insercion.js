// generar arr de los num aleatorios
let arr = Array.from({ length: 10 }, () => Math.floor(Math.random() * 100) + 1);

console.log("Números random: ", arr);

// ordenamiento de insercion
for(let i = 1; i < arr.length; i++) {
    let key = arr[i];
    let j = i - 1;
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}

console.log("Números random ordenados: ", arr);