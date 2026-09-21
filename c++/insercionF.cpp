#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 20, 30, 40};
    numeros.push_back(50);

    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    int arr[5] = {10, 20, 30, 40};
    int n = 4;
    arr[n] = 50;

    return 0;
}