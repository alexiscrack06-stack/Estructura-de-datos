#include <iostream>

int main() {
    int numeros[] = {10, 50, 30, 20, 40};
    int longitud = sizeof(numeros) / sizeof(numeros[0]);
    int buscado = 30;
    int indice = -1;

    for (int i = 0; i < longitud; i++) {
        if (numeros[i] == buscado) {
            indice = i;
            break;
        }
    }

    std::cout << "Posición: " << indice << std::endl;

    return 0;
}