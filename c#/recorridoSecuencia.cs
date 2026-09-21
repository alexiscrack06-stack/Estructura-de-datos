using System;

class Program
{
    static void Main()
    {
        int[] numeros = { 10, 20, 30, 40, 50 };

        // Recorrido clásico con índice
        for (int i = 0; i < numeros.Length; i++)
        {
            Console.WriteLine($"Índice {i}: {numeros[i]}");
        }

        // Recorrido con foreach
        foreach (int num in numeros)
        {
            Console.WriteLine($"Elemento: {num}");
        }
    }
}