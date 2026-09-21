using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<int> lista = new List<int> { 10, 20, 30, 40 };
        lista.Add(50);
        Console.WriteLine(string.Join(", ", lista));

        int[] original = { 10, 20, 30, 40 };
        int[] nuevoArray = new int[original.Length + 1];

        for (int i = 0; i < original.Length; i++)
        {
            nuevoArray[i] = original[i];
        }
        nuevoArray[original.Length] = 50;
    }
}