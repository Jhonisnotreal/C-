//Matriz que pregunta al usuario el numero de filas y columnas, llena de numeros aleatorios, copia el contenido a otra matriz


#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int numeros[100][100], rows, columns, dato;
	int matriz2[100][100];

	cout<<"Digita las filas: "; cin>>rows;
	cout<<"\nDigita las columnas: "; cin>>columns;

	srand(time(NULL)); //No Aleatorios

	//Matriz rellena de numeros aleatorios

	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			dato = 1+rand()%(100); //No entre 1 a 100
			numeros[i][j] = dato;
		}
	}	

	//Copia a otra matriz

	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			matriz2[i][j] = numeros[i][j];
		}
	}

	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			cout<<matriz2[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}