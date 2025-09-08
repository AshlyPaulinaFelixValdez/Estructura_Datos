// busqueda lineal

public class busquedaLineal {
    public static int buscar(int[] arreglo, int buscado) {
        for (int i = 0; i < arreglo.length; i++) {
            if (arreglo[i] == buscado) {
                return i; //posición encontrada
            }
        }
        return -1; // no encontrado
    }

    public static void main(string[] args) {
        int[] numeros = {10, 20, 30, 40};
        system..out.println(buscar(numeros, 30)); // posición 2
    }
}