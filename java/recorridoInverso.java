public class recorridoInverso {
    public static void main(String[] args) {
        int[] numeros = {10, 20, 30, 40, 50};

        // Recorrido inverso
        for (int i = numeros.length - 1; i >= 0; i--) {
            System.out.println("Índice " + i + ": " + numeros[i]);
        }
    }
    
}
