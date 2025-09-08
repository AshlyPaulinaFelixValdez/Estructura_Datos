// recorrido de arreglo
public class recorrido {
    public static void main(string[] args) {
        int[] numeros = {10, 20, 30, 40};

        // for normal
        for (int i = 0; i < numeros.length; i++) {
            system.out.println(numeros[i]);
        }

        // for each
        for (int n : numeros) {
            system.out.println(n);
        }
    }
}