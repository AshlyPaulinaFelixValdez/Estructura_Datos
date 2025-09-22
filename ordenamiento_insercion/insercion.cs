using System;

class InsertionSort
{
    static void Main()
    {
        Random rand = new Random();
        int[] arr = new int[10];

        // generar los nums aleatorios
        for (int i = 0; i < arr.Length; i++)
        {
            arr[i] = rand.Next(1, 101);
        }

        Console.Write("Números random: ");
        foreach (int num in arr) Console.Write(num + " ");
        Console.WriteLine();

        // ordenamiento de insercion
        for (int i = 1; i < arr.Length; i++)
        {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }

        Console.Write("Números random ordenados: ");
        foreach (int num in arr) Console.Write(num + " ");
    }
}