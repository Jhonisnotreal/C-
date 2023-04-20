//
#include<iostream>
using namespace std;

struct Alumno{
	char nombre[15];
	int edad;
	float promedio;
}alumnos[3];

int main(){
	float mayor=0; 
	int pos;


	for(int i=0; i<3; i++){
		fflush(stdin);
		cout<<i+1<<" Nombre: "; cin.getline(alumnos[i].nombre, 15, '\n');
		cout<<i+1<<" Edad: "; cin>>alumnos[i].edad;
		cout<<i+1<<" Promedio: "; cin>>alumnos[i].promedio;
		cout<<"\n";

		if(alumnos[i].promedio>mayor){
			mayor = alumnos[i].promedio;
			pos = i;
		}
	}

	cout<<"\nNombre: "<<alumnos[pos].nombre<<endl;
	cout<<"Edad: "<<alumnos[pos].edad<<endl;
	cout<<"Promedio: "<<alumnos[pos].promedio<<endl;

	return 0;
}