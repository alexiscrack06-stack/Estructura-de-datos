using System;

class Program
{
    static void BubbleSort(int[] arr)
    {
        int n = arr.Length;
        bool intercambio;

        for (int i = 0; i < n - 1; i++)
        {
            intercambio = false;

            for (int j = 0; j < n - 1 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    // Intercambio rápido con tuplas en C#
                    (arr[j], arr[j + 1]) = (arr[j + 1], arr[j]);
                    intercambio = true;
                }
            }

            // Si no hubo intercambios, el arreglo ya está ordenado
            if (!intercambio) break;
        }
    }

    static void Main()
    {
        int[] numeros = { 64, 34, 25, 12, 22, 11, 90 };

        BubbleSort(numeros);

        Console.WriteLine("Arreglo ordenado:");
        Console.WriteLine(string.Join(" ", numeros));
    }
}