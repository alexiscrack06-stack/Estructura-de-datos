public class recorridoSecuencial {
    public static void main(String[] args) {
        int[] numeros = {10, 20, 30, 40, 50};

        // Recorrido por índice
        for (int i = 0; i < numeros.length; i++) {
            System.out.println("Índice " + i + ": " + numeros[i]);
        }

        // Recorrido for-each
        for (int num : numeros) {
            System.out.println("Elemento: " + num);
        }
    }
}
