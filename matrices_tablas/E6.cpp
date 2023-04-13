// Suma de dos matrices de 3x3

#include<iostream>

using namespace std;
int main(){
	int numeros[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int numeros2[3][3] = {{3,2,1},{4,1,1},{7,2,1}};

	cout<<"Matriz 1 \n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<numeros[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"Matriz 2\n";
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<numeros2[i][j]<<" ";
		}
		cout<<"\n";
	}

	cout<<"\nSuma de ambas"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<numeros[i][j] + numeros2[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}