#include <iostream>


int main() {
    int calificacion = 85;
    if (calificacion >= 90) {
        std::cout << "Sobrasaliente";
    } else if (calificacion >= 80) {
        std::cout << "Notable";
    } else if (calificacion >= 60) {
        std::cout << "Aprobado";
    } else {
        std::cout << "Reprobado";
    }
    return 0;
}

