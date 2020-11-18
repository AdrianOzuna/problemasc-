#include<iostream>

using namespace std;

int main(){

    int primerNumero,segundoNumero ;
    int operacion;
    int resultado = 0;

    cout << "Que tipo de operacion desea realizar?: "; cin >> operacion;

    cout << "\nIngrese el primer numero: "; cin >> primerNumero;

    cout << "\nIngrese el segundo numero: "; cin >> segundoNumero;

    switch(operacion) {
        case 1:
            resultado = primerNumero + segundoNumero;
            break;
        case 2:
            resultado = primerNumero - segundoNumero;
            break;
        case 3:
            resultado = primerNumero * segundoNumero;
            break;
        case 4:
            resultado = primerNumero / segundoNumero;
            break;
        default:
            cout << "No pude entender eso, intentalo denuevo...";
    }

    cout << resultado;
    return 0;
}
