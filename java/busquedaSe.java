public class busquedaSe {
    public static void main(String[] args) {
        int[] numeros = {10, 50, 30, 20, 40};
        int buscado = 30;
        int indice = -1;

        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] == buscado) {
                indice = i;
                break;
            }
        }

        System.out.println("Posición: " + indice);
    }
}
