//Matriz de 2x2, llena de numeros y luego copiada a otra matriz

#include<iostream>
using namespace std;

int main(){
	int numeros[2][2] = {{1,2},{3,4}};
	int matriz2[2][2]; 

	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			matriz2[i][j] = numeros[i][j];
		}
	}

	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<matriz2[i][j];
		}
		cout<<"\n";
	}


	return 0;
}