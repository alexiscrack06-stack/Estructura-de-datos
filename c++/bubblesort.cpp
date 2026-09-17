#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compara elementos adyacentes
            if (arr[j] > arr[j + 1]) {
                // Intercambia si el actual es mayor que el siguiente
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numeros[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(numeros) / sizeof(numeros[0]);

    bubbleSort(numeros, n);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
