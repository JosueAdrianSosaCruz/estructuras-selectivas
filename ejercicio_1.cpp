#include <iostream>
using namespace std;

int main() {
    float cal1, cal2, cal3, promedio;

    cout << "Ingresa la primera calificación: ";
    cin >> cal1;
    if (cal1 < 0 || cal1 > 100) {
        cout << "Calificación inválida." << endl;
        return 1;
    }

    cout << "Ingresa la segunda calificación: ";
    cin >> cal2;
    if (cal2 < 0 || cal2 > 100) {
        cout << "Calificación inválida." << endl;
        return 1;
    }

    cout << "Ingresa la tercera calificación: ";
    cin >> cal3;
    if (cal3 < 0 || cal3 > 100) {
        cout << "Calificación inválida." << endl;
        return 1;
    }

    promedio = (cal1 + cal2 + cal3) / 3;

    if (promedio >= 70) {
        cout << "El alumno aprueba con promedio de " << promedio << endl;
    } else {
        cout << "El alumno reprueba con promedio de " << promedio << endl;
    }

    return 0;
}