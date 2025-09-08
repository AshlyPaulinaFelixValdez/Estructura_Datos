// recorrido de un arreglo
let numeros = [10, 20, 30, 40];

// For clásico
for (let i = 0; i < numeros.length; i++) {
    console.log(numeros[i]);
}

// For-of (moderno)
for (let n of numeros) {
    console.log(n);
}