//Calcule la multiplicacion de 2 matrices cuadradas de 3x3

#include<iostream>

using namespace std;

int main(){
	int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3] = {{1,2,1},{2,1,2},{0,1,2}};
	int C[3][3];

	cout<<"\nMatriz A\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<a[j][i]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\nMatriz B\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<b[j][i]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\nMultiplicacion de Matrices\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			C[i][j] = 0;
			for(int k=0; k<3; k++){
				C[i][j] = C[i][j] + a[i][k]* b[k][j];
			}
		}
	}

	cout<<"Matriz Resultante: \n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<C[i][j]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}