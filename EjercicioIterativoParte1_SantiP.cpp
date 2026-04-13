#include <iostream>

using namespace std;

int main() {
    int NumSecreto, NumDado, intentos;
    NumSecreto = 47;
    intentos = 0;
    cout<<"Debe adivinar el numero secreto para abrir el cofre, tiene 5 intentos"<< endl;

    while (intentos < 5) {
        cout<<"Ingrese el numero secreto: "<<endl;
        cin>>NumDado;
        if (NumSecreto < NumDado) {
            cout<<"El numero dado es mayor al numero secreto"<< endl;
        } else if (NumSecreto > NumDado) {
            cout<<"El numero dado es menor al numero secreto"<< endl;
        } else if (NumSecreto == NumDado) {
            cout<<"Logro encontrar el numero secreto, Felicidades!!"<<endl;
            intentos=5;
        }
        intentos++;
    }
    if (NumSecreto != NumDado) {
        cout<<"Lo siento, se acabaron los intentos el cofre se sellara por otros 100 años!!";
    }
}