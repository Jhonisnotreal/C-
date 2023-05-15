#include<iostream>
#include<stdlib.h> //funcionan new y delete
using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(){
	pedirNotas();

	mostrarNotas();

	delete[] calif; //Liberando el espacio en bytes usados antes

	return 0;
}

void pedirNotas(){
	cout<<"Digita el numero de calificaciones: "; cin>>numCalif;

	calif = new int[numCalif]; //Creando el arreglo

	for(int i= 0; i<numCalif; i++){
		cout<<"Ingreas una nota: "; cin>>calif[i];
	}
}

void mostrarNotas(){
	cout<<"\nMostrando notas del usuario\n";

	for(int i = 0; i<numCalif; i++){
		cout<<calif[i]<<endl;
	}
}