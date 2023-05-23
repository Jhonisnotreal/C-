//
#include<iostream>
using namespace std;

void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrarVec(int vec[], int);

int vec[100], tam;

int main(){
	pedirDatos();

	cambiarSigno(vec, tam);

	mostrarVec(vec, tam);
	return 0;
}

void pedirDatos(){
	cout<<"Digita la cantidad de elementos del vector: "; cin>>tam;

	for(int i = 0; i<tam; i++){
		cout<<i+1<<" Digita el numero: "; cin>>vec[i];
	}
		
}

void cambiarSigno(int vec[], int tam){
	for(int i=0; i<tam; i++){
		vec[i] *= -1;
	}
}

void mostrarVec(int vec[], int tam){
	cout<<"\nMostrando los elementos del vector con signo cambiado\n";

	for(int i = 0; i<tam; i++){
		cout<<vec[i]<<" ";
	}
}