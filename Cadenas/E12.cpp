//Convertir 2 cadenas de minusculas a Mayus, compara las y decir si son iguales o no

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char cadena[20], cadena2[20]; 

	cout<<"Digita una palabra: "; cin.getline(cadena, 20, '\n');

	cout<<"Digita otra palabra: "; cin.getline(cadena2, 20, '\n');

	//MAYUS
	strupr(cadena);
	strupr(cadena2);

	if(strcmp(cadena, cadena2) == 0){
		cout<<"Son iguales";
	}
	else {
		cout<<"No son iguales";
	}

	return 0;
}