//Pide al usuario 2 cadenas de caracteres de numeros, uno entero y otro real (decimal), convertirlos a sus resprectivos valores y sumalos


#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	char cad1[10], cad2[10];
	int enteros;
	float flotantes, suma;

	cout<<"Digita un valor entero: "; cin.getline(cad1, 10, '\n');
	cout<<"Digita un valor decimal: "; cin.getline(cad2, 10, '\n');

	enteros = atoi(cad1);
	flotantes = atof(cad2);

	suma = enteros + flotantes;

	cout<<"La suma es: "<<suma<<endl;

	return 0;
}