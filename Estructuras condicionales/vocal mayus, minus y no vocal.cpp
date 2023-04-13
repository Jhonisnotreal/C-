// Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar 
// si el caracter es una vocal minuscula, o una vocal mayuscula o si no es vocal 

#include<iostream>
using namespace std;

int main(){
	char letra;
	
	cout<<"Digite un caracter: "; cin>>letra;
	
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u': cout<<"\nLa vocal es minuscula"<<endl;break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cout<<"\nLa vocal es mayuscula"<<endl;break;
		default : cout<<"\nNo es una vocal"<<endl;break;
	}
	
	
	return 0;
}
