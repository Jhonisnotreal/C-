//Programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2 y muestra el segundo arreglo

#include<iostream>
#include<conio.h>
using namespace std;


int main(){

 	int numeros[5], numeros2[5];

 	for(int i=0;i<5;i++){
 		cout<<i<<". Digite los elementos del arreglo: ";
 		cin>>numeros[i];
 	}	

 	for(int i=0; i<5; i++){
 		numeros2[i] = numeros[i]*2;
 	}

 	cout<<"\nMostrando los elementos del arreglo por 2: \n";
 	for(int i=0; i<5; i++){
 		cout<<numeros2[i]<<" ";
 	}

	return 0;
}
