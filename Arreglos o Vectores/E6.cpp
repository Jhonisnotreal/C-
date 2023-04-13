//Ejercicio6
//Escribe un programa que defina un vector de numeros y calcule si existe algun numero en el 
//vector cuyo valor equivale a la suma del resto de numeros del vector.

#include<iostream>
using namespace std;

int main(){
	int numeros[5]={1,2,3,10,2}; 
	int suma=0, mayor=0;
	
	for(int i=0;i<5;i++){
		suma += numeros[i];
		if(numeros[i] > mayor){
		mayor = numeros[i];
	}
	}
	
	
	if(mayor==suma-mayor){
		cout<<"El numero "<<mayor<<" equivale a la suma de los demas";
	}
	else{
		cout<<"No existe ningun numero que sea igual a la suma de los demas";
	}
	return 0;
}
