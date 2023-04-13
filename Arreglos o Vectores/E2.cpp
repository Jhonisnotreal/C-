//Ejercicio2
//Escriba un programa que defina un vector de numeros y calcule la multiplicacion acumulada de sus elementos

#include<iostream>
using namespace std;

int main(){
	int numeros [] = {1,8,3,5,5};
	int multi=1;
	
	for(int i=0;i<5;i++){
		multi *= numeros[i];
	}
	
	cout<<"\nLa multiplicacion de elementos del vector es: "<<multi<<endl;
	
	return 0;
}
