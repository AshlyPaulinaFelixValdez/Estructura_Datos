// busqueda lineal

function busquedalineal(arreglo, buscado) {
    for (let i = 0; ii < arreglo.length; i++) {
        if (arreglo[i] === buscado) {
            return i; // posición
        }
    }
    return -1; // no encontrado
}

let numeros = [10, 20, 30, 40];
console.log(busquedalineal(numeros, 30)); // posición 2