using system;

class burbuja
{
    static void main()
    {
        console.write("¿Cuántos números vas a. ingresar? ");
        int n = int.parse(console.readline());
        int[] arr = new int[n];

        console.writeline("Ingresa los números: ");
        for (int i = 0; i < n; i++)
        {
            arr[i] = int.parse(console.readline());
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        console.write("Ordenado: ");
        foreach (int num in arr)
        {
            console.write(num + " ");
        }
    }
}