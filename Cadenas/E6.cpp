//EL usuario digita 2 cadenas de caracteres e indicar si ambas son iguales, y si no cual es mayor alfabeticamente

#include<iostream>
#include<string.h>

using namespace std;

int main() {
	char a[20], b[20];

	cout<<"Digita una palabra: "; cin.getline(a, 20, '\n');
	cout<<"Digita otra palabra: "; cin.getline(b, 20, '\n');

	if(strcmp(a, b) == 0){
		cout<<"Ambas son iguales";
	}
	else if(strcmp(a,b) > 0){
		cout<<a<<" es mayor alfabeticamente";
	}
	else{
		cout<<b<<" es mayor alfabeticamente";
	}

	return 0;
}