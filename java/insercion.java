import java.util.ArrayList;
import java.util.Arrays;

public class insercion {
    public static void main(String[] args) {
        // OPCIÓN 1: ArrayList (Dinámico)
        ArrayList<Integer> lista = new ArrayList<>(Arrays.asList(20, 30, 40, 50));
        lista.add(0, 10); // Insertar en índice 0
        System.out.println(lista); // [10, 20, 30, 40, 50]

        // OPCIÓN 2: Array fijo tradicional
        int[] original = {20, 30, 40, 50};
        int[] nuevoArray = new int[original.length + 1];

        nuevoArray[0] = 10;
        for (int i = 0; i < original.length; i++) {
            nuevoArray[i + 1] = original[i];
        }
    }
}
