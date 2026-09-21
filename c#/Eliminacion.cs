using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<int> lista = new List<int> { 10, 20, 30, 40, 50 };
        int indice = 2;

        lista.RemoveAt(indice);
        Console.WriteLine(string.Join(", ", lista));

        int[] original = { 10, 20, 30, 40, 50 };
        int[] nuevoArray = new int[original.Length - 1];

        for (int i = 0, j = 0; i < original.Length; i++)
        {
            if (i != indice)
            {
                nuevoArray[j] = original[i];
                j++;
            }
        }
    }
}