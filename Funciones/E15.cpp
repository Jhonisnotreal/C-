//suma de elementos de un vector 

#include<iostream>
using namespace std;

void pedirDatos();
int suma(int vec[], int);

int vec[100], tam;

int main(){

	pedirDatos();
	cout<<"\nLa suma de los elementos del vector es: "<<suma(vec, tam)<<endl;

	return 0;
}

void pedirDatos(){
	cout<<"Digita los elementos del vector: "; cin>>tam;

	for(int i=0; i<tam; i++){
		cout<<i+1<<" Digita un numero: "; cin>>vec[i];
	}
}

int suma(int vec[],int tam){
	int suma = 0;

	for(int i=0; i<tam; i++){
		suma += vec[i];
	}

	return suma;
}