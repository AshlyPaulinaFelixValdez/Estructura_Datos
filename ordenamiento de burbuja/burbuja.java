import java.util.Scanner;

public class Burbuja {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("¿Cuántos números ingresará? ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Ingresa los números: ");
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-1-i; j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }

        System.out.print("Ordenado: ");
        for(int num : arr){
            System.out.print(num + " ");
        }
    }
}