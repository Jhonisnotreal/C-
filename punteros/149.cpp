// funcion que almacena N numeros en un arreglo dinamico, en otra
// funcion buscar un numero en particular

#include<iostream>
#include<stdlib.h> //Para el new y delete
using namespace std;

void pedirDatos();
void buscarElemen(int *, int);


int nElemen, *elemento;

int main(){

	pedirDatos();

	buscarElemen(elemento, nElemen);

	delete[] elemento; //liberando la memoria usada para el arreglo

	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del arreglo: "; cin>>nElemen;

	elemento = new int[nElemen];

	for(int i = 0; i<nElemen; i++){
		cout<<"Digita un numero ["<<i<<"]: ";
		cin>>*(elemento+i); //elemento[i] es lo mismo
	}
}

void buscarElemen(int *elemento, int nElemen){
	int dato, i;
	bool band = false;

	cout<<"\n\nDigita un numero a buscar: "; cin>>dato;


	//Busqueda secuencial
	i = 0;

	while((i<nElemen)&& (band == false)){
		if(*(elemento+i) == dato){
			band = true;
		}
		i++;
	}

	if(band == false){
		cout<<"El numero "<<dato<<" no existe en el arreglo"<<endl;
	}
	else{
		cout<<"El numero "<<dato<<" si existe en el arreglo, Posicion: "<<i-1<<endl;
	}
}