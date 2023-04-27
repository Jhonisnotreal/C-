#include<iostream>
using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&);

int main(){
	int valor, cien, cincuenta, veinte, diez, cinco, uno;

	cout<<"Digita cantidad en dolares: "; cin>>valor;

	cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);

	cout<<"La cantidad de billetes a entregar como cambio es: "<<endl;
	cout<<"100: "<<cien<<endl;
	cout<<"50: "<<cincuenta<<endl;
	cout<<"20: "<<veinte<<endl;
	cout<<"10: "<<diez<<endl;
	cout<<"5: "<<cinco<<endl;
	cout<<"1: "<<uno<<endl;

	return 0;
}

void cambio(int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
	cien = valor/100;
	valor %= 100;

	cincuenta = valor/50;
	valor %= 50;

	veinte = valor/20;
	valor %= 20;

	diez = valor/10;
	valor %= 10;

	cinco = valor/5;
	uno = valor%5;
}