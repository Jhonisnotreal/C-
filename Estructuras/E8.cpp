#include<iostream>
using namespace std;

struct Promedio{
	float nota1, nota2, nota3;
};

struct Alumno{
	char nombre[20], sexo[10];	
	int edad;
	struct Promedio prom;
}alumnos[100];

int main(){
	int no_alumnos, posM;
	float promedio[100], mayor=0;

	cout<<"No de alumnos: "; cin>>no_alumnos;

	for(int i=0; i<no_alumnos; i++){
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(alumnos[i].nombre, 20, '\n');
		cout<<"Sexo: "; cin.getline(alumnos[i].sexo, 10, '\n');
		cout<<"Edad: "; cin>>alumnos[i].edad;

		cout<<"Pedimos las notas"<<endl;
		cout<<"Nota 1: "; cin>>alumnos[i].prom.nota1;
		cout<<"Nota 2: "; cin>>alumnos[i].prom.nota2;
		cout<<"Nota 3: "; cin>>alumnos[i].prom.nota3;
		cout<<"\n";

		promedio[i] = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3)/3;

		if(promedio[i] > mayor){
			mayor = promedio[i];
			posM = i;
		}
	}

	cout<<"\nMostrando el mejor promedio"<<endl;
	cout<<"Nombre: "<<alumnos[posM].nombre<<endl;
	cout<<"Sexo: "<<alumnos[posM].sexo<<endl;
	cout<<"Edad: "<<alumnos[posM].edad<<endl;
	cout<<"Promedio: "<<promedio[posM]<<endl;

	return 0;
}