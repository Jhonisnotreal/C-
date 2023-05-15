// Arreglo con n numeros y con punteros
// dime cual es el menor elemento

#include<iostream>
using namespace std;

int main(){
	int elementos, numeros[100], *direccion, menor = 100000;

	cout<<"Digita la cantidad de elementos: "; cin>>elementos;

	for(int i=0; i<elementos; i++){
		cout<<"Digita un numero ["<<i<<"]: "; cin>>numeros[i];
	}

	direccion = numeros;


	for(int i = 0; i< elementos ; i++){
		if(*direccion < menor){
			menor = *direccion;
		}
		direccion++;
	}
	cout<<"\nEl menor elemento es: "<<menor<<endl;	

	return 0;
}