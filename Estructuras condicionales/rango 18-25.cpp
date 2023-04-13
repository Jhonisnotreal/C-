// Escriba un programa que solicite la edad (un entero) 
// e indique en la salida estandar si la edad introducida esta en el rango [18-25]

#include<iostream>
using namespace std;

int main(){
	int edad;
	
	cout<<"Digite su edad: "; cin>>edad;
	
	if((edad>=18)&&(edad<=25)){
		cout<<"Cumples con el rango de edad";
	}	
	else{
		cout<<"No estas en el rango de edad";
	}

	
	return 0;
}
