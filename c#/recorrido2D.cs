using System;

class Program
{
    static void Main()
    {
        int[,] matriz = {
            { 1, 2, 3 },
            { 4, 5, 6 },
            { 7, 8, 9 }
        };

        for (int i = 0; i < matriz.GetLength(0); i++)
        {
            for (int j = 0; j < matriz.GetLength(1); j++)
            {
                Console.WriteLine($"[{i}][{j}] = {matriz[i, j]}");
            }
        }
    }
}