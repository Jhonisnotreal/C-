#include<iostream>
#include<string.h>
using namespace std;

struct Persona{
	char nombre[20];
	bool discapacidad;
}personas[100], personasSinD[100], personasConD[100];
//personasSinD - Sin Discapacidad 

int main(){
	int nPersonas, j=0, k=0;

	cout<<"No Personas: "; cin>>nPersonas;

	for(int i=0; i<nPersonas; i++){
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(personas[i].nombre, 20, '\n');
		cout<<"Discapacidad, SI o NO(1/0)? "; cin>>personas[i].discapacidad;

		if(personas[i].discapacidad == 1){
			strcpy(personasConD[j].nombre, personas[i].nombre);
			j++;
		}
		else {
			strcpy(personasSinD[k].nombre, personas[i].nombre);
			k++;
		}
		cout<<"\n";
	}

	cout<<"Personas Sin Discapacidad: \n"; 
	for(int i=0; i<k; i++){
		cout<<personasSinD[i].nombre<<endl;
	}
	cout<<"Personas Con Discapacidad: \n";
	for(int i=0; i<j; i++){
		cout<<personasConD[i].nombre<<endl;
	}

	return 0;
}