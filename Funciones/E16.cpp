//
#include<iostream>
using namespace std;

void pedirDatos();
void orden(int vec[100], int);

int vec[100], tam;

int main(){
	pedirDatos();

	orden(vec, tam);

	return 0;
}

void pedirDatos(){
	cout<<"Digita los elementos del vector: "; cin>>tam;

	for(int i=0; i<tam; i++){
		cout<<i+1<<" Digita un numero: "; cin>>vec[i];
	}
}

void orden(int vec[], int tam){
		char band = 'F'; 

		int i = 0;

		while((band=='F') && (i<tam-1)){
			if(vec[i]>vec[i+1]){
				band = 'V';
			}
			i++;
		}
		if(band=='F'){
			cout<<"El arreglo esta ordenado crecientemente";
		}
		else{
			cout<<"El arreglo no esta ordenado";
		}
}