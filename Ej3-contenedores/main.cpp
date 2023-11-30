#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Vector de enteros
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};

    // Ordenar el vector utilizando std::sort
    std::sort(numeros.begin(), numeros.end());

    // Mostrar los elementos ordenados
    std::cout << "Elementos ordenados:" << std::endl;
    for(int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Encontrar el número máximo utilizando std::max_element
    auto maxElement = std::max_element(numeros.begin(), numeros.end());
    if (maxElement != numeros.end()) {
        int maxNum = *maxElement;
        std::cout << "Número máximo: " << maxNum << std::endl;
    } else {
        std::cout << "El vector está vacío." << std::endl;
    }

    return 0;
}
