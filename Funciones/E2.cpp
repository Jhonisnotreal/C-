//Plantillas de funcion

//Sacar el valor absoluto de un numero

#include<iostream>
using namespace std;

template <class TIPOD>
void mostrarAbs(TIPOD numero);

int main(){

	int num1 = -4; 
	float num2 = -56.67;
	double num3 = -125.5678;

	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);


	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero<0){
		numero = numero * -1;
	}

	cout<<"El valor absoluto del numero introducido es: "<<numero<<endl;
}
