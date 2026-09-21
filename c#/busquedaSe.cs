using System;

class Program
{
    static void Main()
    {
        int[] numeros = { 10, 50, 30, 20, 40 };
        int buscado = 30;
        int indice = -1;

        for (int i = 0; i < numeros.Length; i++)
        {
            if (numeros[i] == buscado)
            {
                indice = i;
                break;
            }
        }

        Console.WriteLine($"Posición: {indice}");
    }
}