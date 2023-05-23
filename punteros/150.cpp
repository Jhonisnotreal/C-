// Pedir nombre al usuario y devolver el numero de vocales que hay
// usa punteros

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std

void pedirDatos();
int conteo(char *);

char nombreUsuario[30];


int main(){

	pedirDatos();

	cout<<"El numero de vocales es: "<<conteo(nombreUsuario)<<endl;

	return 0;
}

void pedirDatos(){
	cout<<"Digita tu nombre: "; cin.getline(nombreUsuario, 30, '\n');

	strupr(nombreUsuario); //transformando a mayuscula
}

int conteo(char *nombre){
	int cont = 0;

	while(*nombre){ //mientras nombre no sea nulo '\0'
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;
		}
		nombre++; 
	}

	return cont;
}
