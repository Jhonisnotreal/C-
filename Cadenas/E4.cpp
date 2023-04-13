//Pedir al usuario una cadena de caracteres, guardar la en un arreglo y copiar su contenido en otro arreglo

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char frase[20], frase2[20];

	cout<<"Digita una frase: "; cin.getline(frase, 20, '\n');

	strcpy(frase2, frase);

	cout<<frase2<<endl;

	return 0;
}