#include <iostream>
using namespace std;

int main() {
    float cal1, cal2, cal3, promedio;
    cout<<"================================="<<endl;
	cout<<"       EVALUACION DEL CURSO"<<endl;
	cout<<"================================="<<endl<<endl;
    cout << "Ingresa la primera calificacion: "<<endl;
    cin >> cal1;
    if (cal1 < 0 or cal1 > 100) {
        cout << "Calificacion invalida, debe ubicarse entre (0-100)" << endl;
        return 1;
    }

    cout << "Ingresa la segunda calificacion: "<< endl;
    cin >> cal2;
    if (cal2 < 0 or cal2 > 100) {
        cout << "Calificacion invalida, debe ubicarse entre (0-100)" << endl;
        return 1;
    }

    cout << "Ingresa la tercera calificacion: "<< endl;
    cin >> cal3;
    cout<<""<<endl;
    if (cal3 < 0 or cal3 > 100) {
        cout << "Calificacion invalida, debe ubicarse entre (0-100)." << endl;
        return 1;
    }

    promedio = (cal1 + cal2 + cal3) / 3;
    
	cout<<"PROMEDIO FINAL"<<endl;
    if (promedio >= 70) {
        cout << "¡FELICIDADES! el alumno logro aprobar el curso con un promedio de " << promedio <<"."<<endl;
    } else {
        cout << "Lamento informar que el alumno reprobo el curso con un promedio de " << promedio <<"."<< endl;
    }

    return 0;
}
