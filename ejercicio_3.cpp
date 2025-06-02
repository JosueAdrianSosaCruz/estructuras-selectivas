#include <iostream>
using namespace std;

int main() {
    int cantidad;
    float precioUnitario, subtotal, descuento, total;

    cout << "Ingrese el precio de una camisa: ";
    cin >> precioUnitario;

    cout << "Ingrese la cantidad de camisas que desea comprar: ";
    cin >> cantidad;

    subtotal = precioUnitario * cantidad;

    if (cantidad >= 3) {
        descuento = subtotal * 0.20;
    } else {
        descuento = subtotal * 0.10;
    }

    total = subtotal - descuento;

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento aplicado: $" << descuento << endl;
    cout << "Total a pagar: $" << total << endl;

    return 0;
}