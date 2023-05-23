//Fibonacci
#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
	int nElemen;

	do{
		cout<<"Digita el numero de elementos: "; cin>>nElemen;
	}while(nElemen <= 0);

	cout<<"\nSerie Fibonacci ";
	for(int i=0; i<nElemen; i++){
		cout<<fibonacci(i)<<",";
	}

	return 0;
}

int fibonacci(int numero){
	if(numero < 2){
		return numero;
	}
	else {
		return fibonacci(numero-1) + fibonacci(numero-2);
	}
}