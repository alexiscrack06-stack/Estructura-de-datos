import java.util.ArrayList;
import java.util.Arrays;

public class inserFinal {
    public static void main(String[] args) {
        ArrayList<Integer> lista = new ArrayList<>(Arrays.asList(10, 20, 30, 40));
        lista.add(50);
        System.out.println(lista);

        int[] original = {10, 20, 30, 40};
        int[] nuevoArray = new int[original.length + 1];

        for (int i = 0; i < original.length; i++) {
            nuevoArray[i] = original[i];
        }
        nuevoArray[original.length] = 50;
    }
}