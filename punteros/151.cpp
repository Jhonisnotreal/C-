// Pedir un string al user, e indicar cuantas veces aparecen
// cada vocal 

#include<iostream>
#include<string.h>
using namespace std;

void pedirDatos();
void contarVocales(char *);

char palabraUsuario[60];

int main(){
	pedirDatos();
	contarVocales(palabraUsuario); //&palabraUsuario[0]  -- esto es lo mismo

	return 0;
}

void pedirDatos(){
	cout<<"Digita una palabra/frase: "; cin.getline(palabraUsuario, 60, '\n');

	strupr(palabraUsuario); //transformando a mayuscula
}

void contarVocales(char *palabra){
	int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

	while(*palabra){ //mientras palabra no sea nulo -> '\0'
		switch(*palabra){
			case 'A': contA++; break;
			case 'E': contE++; break;
			case 'I': contI++; break;
			case 'O': contO++; break;
			case 'U': contU++; break;	
		}
		palabra++; // avanza por el indice de posicion de la palabra
	}

	cout<<"\n\nNumero de veces de la vocal A: "<<contA<<endl;
	cout<<"Numero de veces de la vocal E: "<<contE<<endl;
	cout<<"Numero de veces de la vocal I: "<<contI<<endl;
	cout<<"Numero de veces de la vocal O: "<<contO<<endl;
	cout<<"Numero de veces de la vocal U: "<<contU<<endl;
}ECHO est  activado.
