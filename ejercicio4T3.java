// insertar a la derecha

import java.util.arraylist;

public class insertar {
    public static void main(string[] args) {
        arraylist<integer> numeros = new arraylist<>();
        numeros.add(10);
        numeros.add(20);
        numeros.add(30);

        numeros.add(40); // inserta al final
        system.out.println(numeros); // [10, 20, 30, 40]
    }
}