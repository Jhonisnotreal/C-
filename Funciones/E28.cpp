//Funcion recursiva que calcule un numero elevado
//a una potencia entera mayor o igual que cero: x^y

#include<iostream>
using namespace std;

int potencia(int, int);

int main(){
	int base, exponente;

	cout<<"Digita la base: "; cin>>base;
	cout<<"Digita el exponente: "; cin>>exponente;

	cout<<"\nResultado "<<base<<" elevado a "<<exponente	<<" es: "<<potencia(base, exponente)<<endl;

	return 0;
}

int potencia(int x, int y){
	int pot;

	if(y == 1){
		return x;
	}
	else {
		pot = x * potencia(x, y-1);
	}

	return pot;
}