#include <iostream>
#include <utility> // Para std::swap

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        
        int minIndex = i;

       
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // 
            }
        }

        
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int numeros[] = {64, 25, 12, 22, 11};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    selectionSort(numeros, n);

    std::cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}