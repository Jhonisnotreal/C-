
#include<iostream>
using namespace std;

void pedirDatos();
void impares(int vec[], int);

int vec[100], tam;

int main(){
	pedirDatos();

	impares(vec, tam);

	return 0;
}

void pedirDatos(){
	cout<<"Digita la cantidad de elementos del vector: "; cin>>tam;

	for(int i = 0; i<tam; i++){
		cout<<i+1<<" Digita el numero: "; cin>>vec[i];
	}
}

void impares(int vec[], int tam){
	int vecImpares[100], j=0;

	for(int i=0; i<tam; i++){
		if(vec[i] % 2 != 0){
			vecImpares[j] = vec[i];
			j++;
		}
	}

	for(int i=0; i<j; i++){
		cout<<vecImpares[i]<<" ";
	}
}