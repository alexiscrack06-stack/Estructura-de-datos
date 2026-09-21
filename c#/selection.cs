using System;

class Program
{
    static void SelectionSort(int[] arr)
    {
        int n = arr.Length;

        for (int i = 0; i < n - 1; i++)
        {
            // Asumimos que el índice actual contiene el valor mínimo
            int minIndex = i;

            // Buscamos el elemento más pequeño en el resto del arreglo
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j; // Actualizamos el índice del mínimo
                }
            }

            // Intercambio con tuplas si encontramos un valor menor
            if (minIndex != i)
            {
                (arr[i], arr[minIndex]) = (arr[minIndex], arr[i]);
            }
        }
    }

    static void Main()
    {
        int[] numeros = { 64, 25, 12, 22, 11 };

        SelectionSort(numeros);

        Console.WriteLine("Arreglo ordenado:");
        Console.WriteLine(string.Join(" ", numeros));
    }
}
