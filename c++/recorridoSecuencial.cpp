#include <iostream>
#include <vector>

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int longitud = sizeof(numeros) / sizeof(numeros[0]);

    // Recorrido por índice
    for (int i = 0; i < longitud; i++) {
        std::cout << "Índice " << i << ": " << numeros[i] << std::endl;
    }

    // Recorrido basado en rango (C++11 en adelante)
    for (int num : numeros) {
        std::cout << "Elemento: " << num << std::endl;
    }

    return 0;
}