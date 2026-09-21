#include <iostream>
#include <vector>

int main() {
    
    std::vector<int> numeros = {20, 30, 40, 50};
    numeros.insert(numeros.begin(), 10); // Inserta al inicio

    for (int num : numeros) {
        std::cout << num << " "; 
    }
    std::cout << std::endl;

    
    int arr[5] = {20, 30, 40, 50}; 
    int n = 4; // Elementos actuales
    int nuevo = 10;

    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1]; // Mover a la derecha
    }
    arr[0] = nuevo;

    return 0;
}