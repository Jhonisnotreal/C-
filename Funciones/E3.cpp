#include<iostream>
using namespace std;

void pedirDatos();
void multi(float x, float y);

float num1, num2;

int main(){
	pedirDatos();

	multi(num1, num2);

	return 0;
}

void pedirDatos(){
	cout<<"Ingrese datos: "; cin>>num1>>num2;
}

void multi(float x, float y){
	float resultado = x * y;

	cout<<"El resultado es: "<<resultado<<endl;
}