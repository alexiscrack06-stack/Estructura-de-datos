import java.util.ArrayList;
import java.util.Arrays;

public class eliminacion {
    public static void main(String[] args) {
        ArrayList<Integer> lista = new ArrayList<>(Arrays.asList(10, 20, 30, 40, 50));
        int indice = 2;

        lista.remove(indice);
        System.out.println(lista);

        int[] original = {10, 20, 30, 40, 50};
        int[] nuevoArray = new int[original.length - 1];

        for (int i = 0, j = 0; i < original.length; i++) {
            if (i != indice) {
                nuevoArray[j] = original[i];
                j++;
            }
        }
    }
}