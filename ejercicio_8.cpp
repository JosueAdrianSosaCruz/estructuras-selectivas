#include <iostream>
using namespace std;

int main(){
	string respuesta;
	cout<<"¿Colon descubrio America?"<<endl;
	cin>>respuesta;
	  if (respuesta=="si"){
	  	cout<<"¿El lago Titicaca es el lago navegable mas alto del mundo?"<<endl;
	  	cin>>respuesta;
	  	if (respuesta=="si"){
	  		cout<<"¿El espanol es el único idioma oficial de Peru?"<<endl;
			cin>>respuesta;
			if (respuesta=="no"){
				cout<<"Felicidades, ganaste";
			}else{
				cout<<"Respuesta equivocada, Intentalo de nuevo"<<endl;
			}
		  }else{
		  	cout<<"Respuesta equivocada, Intentalo de nuevo"<<endl;
		  }
	  }else {
	  	cout<<"Respuesta equivocada, Intentalo de nuevo"<<endl;
	  }
}
	
      
	
