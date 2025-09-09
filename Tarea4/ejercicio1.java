// recorrido de arreglos por columnas

public class recorrerColumnas {
    public static void main(string[] args) {
        int[][] matriz = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        int filas = matriz.length;
        int columnas = matriz[0].length;

        for (int j = 0; j < columnas; j++) {
            for (int i = 0, i < filas; i++) {
                system.out.print(matriz[i][j] + " ");
            }
            system.out.println();
        }
    }
}