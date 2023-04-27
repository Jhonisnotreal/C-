#include<iostream>
using namespace std;

void pedirDatos();
float fracc(float numero);

float numero;

int main(){
	pedirDatos();

	cout<<"La parte fraccionaria es: "<<fracc(numero);

	return 0;
}

void pedirDatos(){
	cout<<"Anota tu numero decimal: "; cin>>numero;
}

float fracc(float numero){
	int entero = numero;

	float resultado = numero - entero;

	return resultado;
}