#include<iostream>
using namespace std;

void pedirDatos();
void al_cuadrado(float n);

float numero;

int main(){
	pedirDatos();

	al_cuadrado(numero);
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese datos: "; cin>>numero;
}

void al_cuadrado(float n){
	float resultado;

	resultado = n * n;

	cout<<"El resultado es: "<<resultado<<endl;

}