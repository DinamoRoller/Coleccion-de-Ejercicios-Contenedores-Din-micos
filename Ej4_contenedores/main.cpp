#include <iostream>
#include <valarray>

int main() {
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    std::cout << "Suma: " << valores.sum() << std::endl;
    std::cout << "Media: " << valores.sum() / valores.size() << std::endl;

    //suma

    valores += 5.0;

    std::cout << "Valores + 5.0: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    //resta

    valores -= 2.0;

    std::cout << "Valores - 2.0: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    //multiplicacion

    valores *= 3.0;

    std::cout << "Valores * 3.0: ";
    for (double valor : valores){
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    //division

    valores /= 2.0;

    std::cout << "Valores / 2.0: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}
