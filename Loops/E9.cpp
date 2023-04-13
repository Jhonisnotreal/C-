//Escriba un programa que calcule el valor de: 1*2*3*…*n (factorial)

//Que es un factorial? Supongamos que quiero hayar el factorial de 5, 5!=120 ,o sea, 5*4*3*2*1 = 120 

#include<iostream>
using namespace std;

int main(){
	int numero, factorial = 1; 
	
	cout<<"Digite un numero: "; cin>>numero;	
	
	for(int i=1; i<=numero; i++){
		factorial *= i;
	}
	
	cout<<"\nEl factorial del numero es: "<<factorial<<endl;
	
	return 0;
}
