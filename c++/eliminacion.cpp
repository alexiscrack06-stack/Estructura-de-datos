#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 20, 30, 40, 50};
    int indice = 2;

    numeros.erase(numeros.begin() + indice);

    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    for (int i = indice; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    return 0;
}