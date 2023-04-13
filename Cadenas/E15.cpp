//Transforma una cadena a numeros - atoi() y atof()

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[] = "123";
	char cad2[] = "123.456";
	int numero;
	float numero2;

	numero = atoi(cad);
	numero2 = atof(cad2);

	cout<<numero<<endl;
	cout<<numero2<<endl;

	return 0;
}