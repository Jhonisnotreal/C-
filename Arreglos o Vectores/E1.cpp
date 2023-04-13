//Ejercicio 1
// Escriba un programa que defina un vector de numeros y calcule la suma de sus elementos

#include<iostream>
using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5};
	int suma=0;
	
	for(int i=0;i<5;i++){
		suma += numeros[i];
	}
	
	cout<<"\nLa suma de elementos del vector es: "<<suma<<endl;
	
	return 0;
}
