// Rellena array de 10 numeros, usa punteros
// para indicar los pares y su posicion en memoria

#include<iostream>
using namespace std;

int main(){
	int numeros[10], *direccion;

	for(int i = 0 ; i<10; i++){
		cout<<"Digita un numero ["<<i<<"]: "; cin>>numeros[i];
	}

	direccion = numeros; //Posicion de memoria comienza numeros

	for(int i = 0; i< 10 ; i++){
		if(*direccion%2==0){
			cout<<"El numero "<<*direccion<<" es par"<<endl;
			cout<<"Posicion "<<direccion<<endl;
		}
		direccion++;
	}	

	return 0;
}