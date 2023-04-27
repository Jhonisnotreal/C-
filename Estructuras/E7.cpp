//
#include<iostream>
using namespace std;

struct Promedio{
	float nota1, nota2, nota3;
};

struct Alumno{
	char nombre[20], sexo[10];	
	int edad;
	struct Promedio prom;
}alumno1;

int main(){
	float promedio;


	cout<<"Nombre: "; cin.getline(alumno1.nombre, 20, '\n');

	cout<<"Sexo: "; cin.getline(alumno1.sexo, 10, '\n');

	cout<<"Edad: "; cin>>alumno1.edad;

	cout<<"\nNotas del Alumno: \n";
	cout<<"Nota1: "; cin>>alumno1.prom.nota1;
	cout<<"Nota2: "; cin>>alumno1.prom.nota2;
	cout<<"Nota3: "; cin>>alumno1.prom.nota3;
	
	promedio = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;

	cout<<"\nNombre Alumno: "<<alumno1.nombre<<endl;
	cout<<"Sexo: "<<alumno1.sexo<<endl;
	cout<<"Edad: "<<alumno1.edad<<endl;
	cout<<"Promedio: "<<promedio;

	return 0;
}