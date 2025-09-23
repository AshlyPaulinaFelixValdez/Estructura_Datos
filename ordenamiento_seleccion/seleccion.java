import java.util.Random;

public class Selection {
    public static void main(String[] args) {
        Random rand = new Random();
        int[] arr = new int[10];

        // generar nums aleatorios
        for (int i = 0; i < arr.length; i++) {
            arr[i] = rand.nextInt(100) + 1;
        }

        System.out.print("Números random: ");
        for (int n : arr) System.out.print(n + " ");
        System.out.println();

        // ordenamiento de selección
        for (int i = 0; i < arr.length - 1; i++) {
            int minIdx = i;
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j] < arr[minIdx]) {
                    minIdx = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }

        System.out.print("Números random ordenados: ");
        for (int n : arr) System.out.print(n + " ");
    }
}