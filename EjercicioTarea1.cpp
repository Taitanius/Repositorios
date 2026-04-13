#include <iostream>

using namespace std;

int main() {
    int num, numDoble, numCuadruple;
    cout << "Dame un numero: ";
    cin >> num;

    numDoble = num + num;
    numCuadruple = num + num + num + num;

    cout << "El doble del numero es: "<< numDoble <<endl;
    cout << "El cuadruple del numero es: "<< numCuadruple << endl;


}