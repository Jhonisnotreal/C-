//Suma recursiva
#include<iostream>
using namespace std;

int sumar(int);

int main(){
	int nElemen;

	do{
		cout<<"Digita el numero de elementos: "; cin>>nElemen;
	} while(nElemen <= 0);

	cout<<"La suma es: "<<sumar(nElemen)<<endl;

	return 0;
}

int sumar(int n){
	int suma = 0;

	if(n==1){
		suma = 1;
	}
	else {
		suma = n+sumar(n-1);
	}
	return suma;
}
