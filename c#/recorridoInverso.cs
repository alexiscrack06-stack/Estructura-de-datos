using System;

class Program
{
    static void Main()
    {
        int[] numeros = { 10, 20, 30, 40, 50 };

        // Recorrido inverso clásico
        for (int i = numeros.Length - 1; i >= 0; i--)
        {
            Console.WriteLine($"Índice {i}: {numeros[i]}");
        }
    }
}