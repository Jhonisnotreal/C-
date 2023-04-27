//El mayor de dos numeros

#include<iostream>
using namespace std;

int encontrarMax(int x, int y);

int main(){
	int n1, n2;
	int mayor;

	cout<<"Digita 2 numeros: \n"; cin>>n1>>n2;

	mayor = encontrarMax(n1,n2);

	cout<<"El mayor de ambos numeros es: "<<mayor<<endl;

	return 0;
}

int encontrarMax(int x, int y){
	int numMax;

	if(x>y){
		numMax = x;
	}
	else {
		numMax = y;
	}

	return numMax;
}