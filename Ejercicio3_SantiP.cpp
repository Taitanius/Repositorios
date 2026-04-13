#include <iostream>


int main() {
    {
        int edad;
        std::cout << "Ingrese su edad: " << std::endl;
        std::cin >> edad;

        if (edad >= 18) {
            std::cout << "Acceso concedido" << std::endl;
        } else {
            std::cout << "Regresa en " <<18-edad << "años."<< std::endl;
        }

    }
    return 0;
}


