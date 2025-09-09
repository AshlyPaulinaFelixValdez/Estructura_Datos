// recorrido de arreglo por columnas

let matriz = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
];

let filas = matriz.length;
let columnas = matriz[0].length;

for (let j = 0; j < columnas; j++) {
    for (let i = 0; i < filas; i++) {
        console.log(matriz[i][j]);
    }
    console.log("---");
}
