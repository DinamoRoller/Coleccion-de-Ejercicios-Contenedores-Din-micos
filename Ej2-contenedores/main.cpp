#include <iostream>
#include <list>
#include <stack>

int main() {
    // se crea un contenedor list para almacenar numeros decimales
    std::list<double> miLista;

    //se añaden algunos elementos a la lista
    miLista.push_back(3.14);
    miLista.push_back(2.718);
    miLista.push_back(1.618);

    // se crea un adaptador de secuencia stack para la lista
    std::stack<double, std::list<double>>miPila(miLista);

    // se muestra el contenido inicial de la lista y la pila
    std::cout << "Contenido de la lista: " << std::endl;
    for (const auto& elemento : miLista) {
        std::cout << elemento << " ";
    }

    std::cout << std::endl;

    std::cout << "Operaciones en la pila: " << std::endl;

    // se muestra el elemento superior de la pila
    std::cout << "Top de la pila: " << miPila.top() << std::endl;

    // Se realiza una operacion push en la pila
    miPila.push(0.999);

    // se muestra el contenido de la pila despues del push
    std::cout << "Despues de push, contenido de la pila:" << std::endl;
    while (!miPila.empty()) {
        std::cout << miPila.top() << " ";
        miPila.pop();
    }
    std::cout << std::endl;

    return 0;
}