#include <iostream>
using namespace std;

void pedirDatos();
void funpot(int x, int y);

int numero, exponente;

int main(){
	pedirDatos();
	funpot(numero, exponente);

	return 0;
}

void pedirDatos(){
	cout<<"Digita un entero: "; cin>>numero;
	cout<<"Digita la potencia: "; cin>>exponente;
}

void funpot(int x, int y){
	long resultado=1;

	for(int i=0; i<y; i++){
		resultado *= x;
	}

	cout<<"EL resultado es: "<<resultado;
}

