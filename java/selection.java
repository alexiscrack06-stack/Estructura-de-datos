public class selection {
    public static void selectionSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) {
            // Asumimos que el índice actual contiene el valor mínimo
            int minIndex = i;

            // Buscamos el elemento más pequeño en el resto del arreglo
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j; // Actualizamos la posición del mínimo
                }
            }

            // Intercambiamos el mínimo encontrado con el elemento en la posición i
            if (minIndex != i) {
                int temp = arr[minIndex];
                arr[minIndex] = arr[i];
                arr[i] = temp;
            }
        }
    }

    public static void main(String[] args) {
        int[] numeros = {64, 25, 12, 22, 11};

        selectionSort(numeros);

        System.out.print("Arreglo ordenado: ");
        for (int num : numeros) {
            System.out.print(num + " ");
        }
    }
}