// tipo de dato abstracto
class persona {
    constructor(nombre, apellido) {
        this.nombre = nombre;
        this.apellido = apellido;
    }
}

// arreglo
let personas = [
    new persona("Ana", "López"),
    new persona("Luis", "García"),
    new persona("Paola", "Valdez")
];