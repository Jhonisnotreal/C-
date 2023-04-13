//Programa que determina si una matriz es simetrica o no. Una matriz es simetrica si es cuadrada y si es igual a su matriz traspuesta

#include<iostream>

using namespace std;

int main(){
	int numeros[100][100], rows, columns;
	char band='F';

	cout<<"Digita filas: "; cin>>rows;
	cout<<"Digita columnas: "; cin>>columns;

	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			cout<<"Digita un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}

	if(rows==columns){
		for(int i=0; i<rows; i++){
			for(int j=0; j<columns; j++){
				if(numeros[i][j] == numeros[j][i]){
					band = 'V';
				}
			}
		}
	} 

	if(band == 'V'){
		cout<<"La matriz es simetrica";
	}
	else {
		cout<<"La matriz no es simetrica";
	}

	return 0;
}