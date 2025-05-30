#include <iostream>
using namespace std;

int main(){
	int num;
	float precio;
	cout<<"Ingrese el numero de llantas que va a comprar: ";
	cin>>num;
	if (num<5 and num>0){
		precio=num*300;
		cout<<"El precio de cada llanta es 300"<<endl;
		cout<<"El precio total a pagar es: "<<precio;
	}else if (num>=5 and num<=10){
		precio=num*250;
		cout<<"El precio de cada llanta es 250"<<endl;
		cout<<"El precio total a pagar es: "<<precio;
	}else if (num>10){
		precio=num*200;
		cout<<"El precio de cada llanta 200"<<endl;
		cout<<"El precio total a pagar es: "<<precio;
	}else {
		cout<<"Numero no valido"<<endl;
	}
	return 0;
}