#include<iostream>
using namespace std; 

void intercambiar(int&, int&);

int main(){
	int n1 = 10, n2=15;

	cout<<"El valor del num 1: "<<n1<<endl;
	cout<<"El valor del num 2: "<<n2<<endl;
	intercambiar(n1, n2);

	cout<<"Los nuevos valores de n1: "<<n1<<endl;
	cout<<"Nuevo valor de n2: "<<n2<<endl;

	return 0;
}

void intercambiar(int& n1, int& n2){
	int aux; 

	aux = n1; 
	n1 = n2;
	n2 = aux;
}