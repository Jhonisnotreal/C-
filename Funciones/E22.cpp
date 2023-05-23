//Paso de parametros de tipo estructura

#include<iostream>
using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}p1;

void pedirDatos();
void mostrarDatos(Persona);

int main(){
	pedirDatos();

	mostrarDatos(p1);

	return 0;
}

void pedirDatos(){
	cout<<"Nombre: "; cin.getline(p1.nombre, 20, '\n');
	cout<<"Edad: "; cin>>p1.edad;
}

void mostrarDatos(Persona p){
	cout<<"\n\nNombre: "<<p.nombre<<endl;
	cout<<"Edad: "<<p.edad<<endl;
}