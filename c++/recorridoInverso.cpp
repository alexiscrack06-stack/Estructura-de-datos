#include <iostream>

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int longitud = sizeof(numeros) / sizeof(numeros[0]);

    // Recorrido inverso con índices
    for (int i = longitud - 1; i >= 0; i--) {
        std::cout << "Índice " << i << ": " << numeros[i] << std::endl;
    }

    return 0;
}