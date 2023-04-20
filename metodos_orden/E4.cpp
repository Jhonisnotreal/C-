//Ordenacion Shell
#include<iostream>

using namespace std;

void intercambio(float &x, float &y){
	float aux;

	aux = x;
	x = y;
	y = aux;
}

void ordenacionShell(float a[], int n){
	int salto, i, j, k;
	salto = n/2;

	while(salto>0){
		for(i=salto; i<n; i++){
			j = i - salto;
			while(j>=0){
				k = j + salto;
				if(a[j] <= a[k]){ //Elementos ordenados
					j = -1;
				}
				else {	//Elementos desordenados
					intercambio(a[j],a[k]);
					j -= salto;
				}
			}
		}
		salto = salto/2;
	} 
} 

int main(){
	float arreglo[] = {4,5,6,7,3,7,21,6,18};

	ordenacionShell(arreglo, 9);

	cout<<"Arreglo ascendente"<<endl;
	for(int i=0; i<9; i++){
		cout<<arreglo[i]<<"|";
	}

	cout<<"\nArreglo descendente"<<endl;
	for(int i = 8; i>=0; i--){
		cout<<arreglo[i]<<"|";
	}

	cout<<endl;

	return 0;
}