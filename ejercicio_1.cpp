#include <iostream>
using namespace std;

int main() {
    float cal1, cal2, cal3, promedio;
    cout << "Ingrese la primera calificacion: ";
    cin >> cal1;
    cout << "Ingrese la segunda calificacion: ";
    cin >> cal2;
    cout << "Ingrese la tercera calificacion: ";
    cin >> cal3;
    promedio = (cal1 + cal2 + cal3) / 3;
    cout << "Promedio: " << promedio << endl;
    if (promedio >= 70) {
        cout << "El alumno APRUEBA el curso." << endl;
    } else {
        cout << "El alumno REPRUEBA el curso." << endl;
    }

    return 0;
}