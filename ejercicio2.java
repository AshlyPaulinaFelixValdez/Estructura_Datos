// Definición de un tipo de dato abstracto
class persona {
    string nombre;
    string apellido;

    persona(string nombre, string appellido) {
        this.nombre = nombre;
        this.apellido = apellido;
    }
}

// Declarar un arreglo
public class main {
    public static void main(string[] args) {
        persona[] personas = new persona[3];
        personas[0] = new persona("Ana", "López");
        personas[1] = new persona("Luis", "García");
        personas[2] = new persona("Paola", "Valdez");
    }
}