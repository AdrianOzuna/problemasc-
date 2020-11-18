/*Ejercicio 2: Escribe un programa que lea de la entrada estandar al precio de un producto y muestre en la salida estandard el precio
del productor al aplicarle el IVA*/

#include<iostream>

using namespace std;

int main() {
    double precio;
    double porcentaje;
    double iva = precio*porcentaje;

    cout << "Cual es el precio a aplicar el IVA?: "; cin >> precio;
    cout << precio;
    cout << "\nCual es el porcentaje de IVA?: "; cin >> porcentaje;
    cout << porcentaje;
    cout << "\nEl precio luego de aplicar el IVA es: " << iva;

    return 0;
}
