#include <iostream>

int main() {
    int nivel, contraseña;

    std::cout << "Para acceder al tesoro del gremio debes ser rango Elite o Leyenda y darme la contraseña."<< std::endl;
    std::cout << "Deme primero su nivel y luego la contraseña:"<< std::endl;
    std::cin >> nivel, contraseña;
    if (nivel >=61 && nivel <= 100) {
        if (contraseña == 1234) {
            std::cout << "Acceso concedido. Bievenido al tesoro!" << std::endl;
        } else {
            std::cout << "Rango suficiente, pero contraseña incorrecta." << std::endl;
        }

    } else {
        std::cout << "Rango insuficiente, acceso denegado" << std::endl;
    }

    return 0;
}

