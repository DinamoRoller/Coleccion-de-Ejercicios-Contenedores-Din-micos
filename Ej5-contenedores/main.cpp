#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

int main() {
    // expresion para calcular el cuadrado

    auto cuadrado = [](int num) { return num * num; };

    //uso de lambda
    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    //vector de numeros
    std::vector<int> numeros = {1, 2, 3, 4, 5};

    //uso de for_each con lambda para imprimir cada numero
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << num << std::endl;
    });

    // uso de punteros
    auto ptr = std::make_shared<int>(10);
    std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;

    return 0;
}