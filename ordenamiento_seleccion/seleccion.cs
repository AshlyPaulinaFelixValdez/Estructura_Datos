using System;

class Seleccion
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
        foreach (int n in arr) Console.Write(n + " ");
        Console.WriteLine();

        // ordenamiento de selección
        for (int i = 0; i < arr.Length - 1; i++)
        {
            int minIdx = i;
            for (int j = i + 1; j < arr.Length; j++)
            {
                if (arr[j] < arr[minIdx])
                {
                    minIdx = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }

        Console.Write("Números random ordenados: ");
        foreach (int n in arr) Console.Write(n + " ");
    }
}