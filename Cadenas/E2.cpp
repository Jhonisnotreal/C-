//Cadena que comprueba si hay mas de 10 caracteres

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char frase[50];

	cout<<"Digita una frase: "; cin.getline(frase, 50, '\n');

	if(strlen(frase)>10){
		cout<<frase<<endl;
	}
	else {
		cout<<"La cadena no supera los 10 caracteres"<<endl;
	}


	return 0; 
}