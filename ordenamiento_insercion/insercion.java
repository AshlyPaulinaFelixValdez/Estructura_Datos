import java.util.Random;

public class InsertionSort {
    public static void main(String[] args) {
        Random rand = new Random();
        int[] arr = new int[10];

        // generar los num aleatorios
        for (int i = 0; i < arr.length; i++) {
            arr[i] = rand.nextInt(100) + 1;
        }

        System.out.print("Números random: ");
        for (int num : arr) System.out.print(num + " ");
        System.out.println();

        // ordenamiento de insercion
        for (int i = 1; i < arr.length; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }

        System.out.print("Números random ordenados: ");
        for (int num : arr) System.out.print(num + " ");
    }
}