//Determinar si una matriz es simetrica

#include<iostream>
using namespace std;

void pedirDatos();
void simetria(int m[][100], int, int);


int m[100][100], nfilas, ncol;

int main(){
	pedirDatos();

	simetria(m, nfilas, ncol);


	return 0;
}

void pedirDatos(){
	cout<<"Digita el numero de filas: "; cin>>nfilas;
	cout<<"Digita el numero de columnas: "; cin>>ncol;

	for(int i=0; i<nfilas; i++){
		for(int j=0; j<ncol; j++){
			cout<<"Digita un numero ["<<i<<"]["<<j<<"]: "; cin>>m[i][j];
		}
	}
}

void simetria(int m[][100], int nfilas, int ncol){
		int cont = 0;


	if(nfilas == ncol){
		for(int i=0; i<nfilas; i++){
			for(int j=0; j<ncol; j++){
				if(m[i][j] == m[j][i]){
					cont++;
				}		
			}
		}	
	}
	
	if(cont == nfilas*ncol){
		cout<<"\nLa matriz es simetrica";
	}
	else{
		cout<<"\nLa matriz no es simetrica";
	}
}