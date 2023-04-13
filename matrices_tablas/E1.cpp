//Rellenando una matriz, pidiendo al usuario las filas y columnas

#include<iostream>
using namespace std;

int main(){
	int numeros[100][100], rows, columns;

	cout<<"Digita las filas: ";
	cin>>rows;
	cout<<"\nDigita las columnas: ";
	cin>>columns;

	//Guardando elementos en la matriz

	for(int i=0; i<rows; i++){
		for(int j=0; j<columns; j++){
			cout<<"\nDigite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}

	//Mostrando la matriz
	for(int i=0; i<rows;i++){
		for(int j=0; j<columns; j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}



	return 0;
}