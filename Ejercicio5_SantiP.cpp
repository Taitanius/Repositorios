#include <iostream>

int main() {
    int nivel;
    std::cout << "Deme su nivel actual: " << std::endl;
    std::cin >> nivel;

    if (nivel >=1 && nivel <= 20) {
        std::cout << "Tu rango es Aprendiz" << std::endl;
        std::cout << "Te faltan "<< 21-nivel << " niveles."<<std::endl;
    } else if (nivel >=21 && nivel <= 40) {
        std::cout << "Tu rango es Soldado" << std::endl;
        std::cout << "Te faltan "<< 41-nivel << " niveles."<<std::endl;
    } else if (nivel >=41 && nivel <= 60) {
        std::cout << "Tu rango es Veterano" << std::endl;
        std::cout << "Te faltan "<< 61-nivel << " niveles."<<std::endl;
    } else if (nivel >=61 && nivel <= 80) {
        std::cout << "Tu rango es Elite" << std::endl;
        std::cout << "Te faltan "<< 81-nivel << " niveles."<<std::endl;
    } else if (nivel >=81 && nivel <= 100) {
        std::cout << "Llegaste al rango maximo, Leyenda" << std::endl;
    }

    return 0;
}

