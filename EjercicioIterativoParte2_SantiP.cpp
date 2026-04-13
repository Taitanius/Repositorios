#include <iostream>

using namespace std;

int main() {
    long long num, maximo;
    int pasos, pares, impares;

    pasos = 0;
    pares = 0;
    impares = 0;

    cout<<"Deme un numero"<< endl;
    cin>>num;

    maximo = num;

    while (num != 1) {

        cout<<num<< endl;

        if (num%2 == 0) {
            num = num/2;
            pares++;
        } else if (num%2 != 0) {
            num=(num*3)+1;
            impares++;
        }

        if (num >= maximo) {
            maximo = num;
        }

        pasos++;
    }
    cout<<"Secuencia completada en "<<pasos<<" pasos"<< endl;
    cout<<"Valor maximo alcanzado: "<<maximo<< endl;
    cout<<"Numero de veces que el numero fue par: "<<pares<< endl;
    cout<<"Numero de veces que el numero fue impar: "<<impares<< endl;

}