//Busqueda Secuencial

#include<iostream>
using namespace std;

int main(){
	int a[5] = {3,4,2,1,5}, dato, i;
	char band = 'F';

	dato = 10;
	//Busqueda Secuencial
	i = 0;
	while((band == 'F') && (i<5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}

	if(band=='F'){
		cout<<"Dato no existe en el arreglo";
	}
	else if(band == 'V'){
		cout<<"El numero esta en la posicion por indice en: "<<i-1<<endl;
	}

	return 0;
}