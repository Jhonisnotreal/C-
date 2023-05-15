// Pedir al usuario N numeros, 
// guardar los en un arreglo y ordenar los en orden ascendente

#include<iostream>
#include<stdlib.h> // Para el new y el delete
using namespace std;

void pedirDatos();
void ordenar(int *, int);
void mostrar(int *, int);

int datos, *elemento;

int main(){
	pedirDatos();

	ordenar(elemento, datos);

	mostrar(elemento, datos);

	delete[] elemento; //Liberar la memoria usada para el arreglo

	return 0;
}

void pedirDatos(){
	cout<<"Digita el numero de elementos del arreglo: "; cin>>datos;

	elemento = new int[datos];

	for(int i = 0; i < datos; i++){
		cout<<"Digita un numero["<<i<<"]: ";
		cin>>*(elemento + i); //elemento[i] - son lo mismo
	}
}

void ordenar(int *elemento, int datos){
	int aux;

	// ordenando con metodo burbuja usando punteros
	for(int i=0; i<datos; i++){
		for(int j=0; j<datos-1; j++){
			if(*(elemento+j) > *(elemento+j+1)){ //elemento[j] > elemento[j+1]
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void mostrar(int *elemento, int datos){
	cout<<"\n\nMostrando arreglo ordenado: ";
	for(int i=0; i<datos; i++){
		cout<<*(elemento+i)<<" "; //elemento[i]
	}
}