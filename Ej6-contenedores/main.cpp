#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    std::string s = "12345";

    try {
        // Convertir la cadena de caracteres a un número entero usando boost::lexical_cast
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;
    } catch(const boost::bad_lexical_cast& e) {
        // Manejar la excepción en caso de error en la conversión
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
