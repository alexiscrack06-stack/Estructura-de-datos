public class QuickSort {
    private static int particion(int[] arr, int bajo, int alto) {
        int pivote = arr[alto];
        int i = bajo - 1;

        for (int j = bajo; j < alto; j++) {
            if (arr[j] < pivote) {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[alto];
        arr[alto] = temp;

        return i + 1;
    }

    public static void ordenar(int[] arr, int bajo, int alto) {
        if (bajo < alto) {
            int pi = particion(arr, bajo, alto);
            ordenar(arr, bajo, pi - 1);
            ordenar(arr, pi + 1, alto);
        }
    }

    public static void main(String[] args) {
        int[] arr = {10, 7, 8, 9, 1, 5};
        ordenar(arr, 0, arr.length - 1);
        for (int val : arr) System.out.print(val + " ");
    }
}