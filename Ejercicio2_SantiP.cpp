#include <iostream>

int main() {
    int x, y;
    std::cout << "Dame una coordenada en x, y ";
    std::cin >> x >> y;

    bool xr = (x >= -175 && x <= 175);
    bool yr = (y >= -127 && y <= 127);

    std::cout << "x en rango " << xr << std::endl;
    std::cout << "y en rango " << yr << std::endl;
    std::cout << "alguna en rango " << (xr || yr) << std::endl;
    std::cout << "ambas en rango " << (xr && yr) << std::endl;
    std::cout << "ninguna en rango " << (!xr && !yr) << std::endl;

    return 0;
}

