#include<iostream>
using namespace std;

void pedirDatos();
int menorElemento(int m[][100], int, int);

int m[100][100], nfilas, ncol;

int main(){
	pedirDatos();

	cout<<menorElemento(m, nfilas, ncol);
	
	return 0;
}

void pedirDatos(){
	cout<<"Digita numero de filas: "; cin>>nfilas;
	cout<<"Digita el numero de columnas: "; cin>>ncol;

	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			cout<<"Digita un numero ["<<i<<"]["<<j<<"]: "; cin>>m[i][j];
		}
	}
}

int menorElemento(int m[][100], int nfilas, int ncol){
	int fila, menor=10000;

	cout<<"\nDigita un numero de fila para comprobar el menor elemento: "; cin>>fila;

	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			if(i == fila){
				if(m[i][j] < menor){
					menor = m[i][j];
				}
			}
		}
	}

	return menor;
}
