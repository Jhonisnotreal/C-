//Estructura basica
#include<iostream>
using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}
persona1 = {"Juan", 20},
persona2 = {"Alizee", 18},
persona3;

int main(){

	cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"Edad1: "<<persona1.edad<<endl;

	cout<<"Persona 2: "<<persona2.nombre<<" y edad: "<<persona2.edad;

	cout<<"\nDigita un Nombre: ";
	cin.getline(persona3.nombre, 20, '\n');

	cout<<"Digita la edad: "; cin>>persona3.edad;
	cout<<"\nDatos: \n";
	cout<<persona3.nombre<<" "<<persona3.edad;
	return 0;
}