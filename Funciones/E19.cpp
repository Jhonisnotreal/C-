//Paso de parametros tipo matriz

//Elevar al cuadrado todos los elementos de una matriz

#include<iostream>
using namespace std;

void mostrarMatriz(int m[][3], int, int);
void elevarCuadrado(int m[][3], int, int);
void mostrarMatrizElevada(int m[][3], int, int);

int main(){
	const int nfilas = 2, ncol=3;
	int m[nfilas][ncol] = {{1,3,4},{2,5,6}};

	mostrarMatriz(m, nfilas, ncol);

	elevarCuadrado(m, nfilas, ncol);

	mostrarMatrizElevada(m, nfilas, ncol);

	return 0;
}

void mostrarMatriz(int m[][3], int nfilas, int ncol){
	int j=0, i=0;

	cout<<"Mostrando matriz original\n";
	for(i=0; i<nfilas; i++){
		for(j=0; j<ncol; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}

}

void elevarCuadrado(int m[][3], int nfilas, int ncol){
	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			m[i][j] *= m[i][j];
		}
	}
}

void mostrarMatrizElevada(int m[][3], int nfilas, int ncol){
	cout<<"\nMostrando matriz elevada\n";

	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			cout<<m[i][j]<<" ";
		}
		cout<<"\n";
	}
}