public class BubbleSortExample {
    public static void bubbleSort(int[] arr) {
        int n = arr.length;
        boolean intercambio;
        
        for (int i = 0; i < n - 1; i++) {
            intercambio = false;
            
            // Recorre el arreglo restando i porque los últimos elementos ya están ordenados
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    // Intercambio de posiciones
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    
                    intercambio = true;
                }
            }
            
            // Si no hubo intercambios en la pasada, el arreglo ya está ordenado
            if (!intercambio) {
                break;
            }
        }
    }

    public static void main(String[] args) {
        int[] numeros = {64, 34, 25, 12, 22, 11, 90};

        bubbleSort(numeros);

        System.out.println("Arreglo ordenado:");
        for (int num : numeros) {
            System.out.print(num + " ");
        }
    }
}