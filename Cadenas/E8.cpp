//Cadena con "Hola que tal", luego crea otra para preguntar al usuario su nombre, y agrega el nombre al final de la primera cadena
// "Hola que tal (NombreUsuario)"

#include<iostream>
#include<string.h>

using namespace std;

int main() {
	char cad[] = "Hola que tal ";
	char nombre[20];

	cout<<"Ingrese su nombre: "; cin.getline(nombre,20,'\n');

	strcat(cad, nombre);

	cout<<cad<<endl;

	return 0;
}