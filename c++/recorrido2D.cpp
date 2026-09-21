#include <iostream>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int filas = 3;
    int columnas = 3;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            std::cout << "[" << i << "][" << j << "] = " << matriz[i][j] << std::endl;
        }
    }

    return 0;
}