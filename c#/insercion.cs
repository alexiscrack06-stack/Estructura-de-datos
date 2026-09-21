using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // OPCIÓN 1: Lista dinámica (Recomendado)
        List<int> lista = new List<int> { 20, 30, 40, 50 };
        lista.Insert(0, 10);
        Console.WriteLine(string.Join(", ", lista)); // 10, 20, 30, 40, 50

        // OPCIÓN 2: Array fijo tradicional
        int[] original = { 20, 30, 40, 50 };
        int[] nuevoArray = new int[original.Length + 1];

        nuevoArray[0] = 10; // Asignar al inicio
        for (int i = 0; i < original.Length; i++)
        {
            nuevoArray[i + 1] = original[i]; // Desplazar hacia la derecha
        }
    }
}