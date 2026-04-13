#include <iostream>

int main() {
    float Producto, Descuento, DineroCliente, PrecioFinal;

    std::cout << "Deme el precio del producto: " << std::endl;
    std::cin >> Producto;

    std::cout << "Deme el descuento del producto: " << std::endl;
    std::cin >> Descuento;

    std::cout << "Deme el dinero disponible del cliente: " << std::endl;
    std::cin >> DineroCliente;

    PrecioFinal = Producto * (1 - (Descuento / 100));

    std::cout << std::endl;
    std::cout << PrecioFinal;
    std::cout << std::endl;

    if (PrecioFinal > DineroCliente) {
        std::cout << "El cliente no puede pagarlo" << std::endl;
    }

    if (PrecioFinal < DineroCliente) {
        std::cout << "El cliente puede pagarlo" << std::endl;
    }

    if (PrecioFinal > 0 && PrecioFinal < DineroCliente) {
        std::cout << "El precio es positivo y el cliente puede pagarlo" << std::endl;
    }

    return 0;
}


