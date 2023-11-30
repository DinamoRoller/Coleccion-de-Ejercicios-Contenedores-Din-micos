#include <iostream>
#include <vector>

int main() {
    //se crea un vector de enteros
    std::vector<int> miVector;

    // se añaden elementos al vector usando push_back
    miVector.push_back(10);
    miVector.push_back(20);
    miVector.push_back(30);
    miVector.push_back(40);

    // se utiliza un bucle for basado en rangos para recorrer y mostrar cada elemento del vector
    std::cout << "Elementos del vector: " << std::endl;
    for (const auto& elemento : miVector) {
        std::cout << elemento << " ";
    }
    return 0;
}