#include <iostream>
using namespace std;

int main() {
    int anio;

    cout << "Ingrese un anio: ";
    cin >> anio;

    if (anio % 4 == 0) {
        if (anio % 100 == 0) {
            if (anio % 400 == 0) {
                cout << "El anio " << anio << " es bisiesto." << endl;
            } else {
                cout << "El anio " << anio << " NO es bisiesto." << endl;
            }
        } else {
            cout << "El anio " << anio << " es bisiesto." << endl;
        }
    } else {
        cout << "El anio " << anio << " NO es bisiesto." << endl;
    }

    return 0;
}