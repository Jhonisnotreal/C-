#include<iostream>
using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5}, *direccion;

	// direccion = &numeros[0];
	direccion = numeros;

	for(int i = 0; i<5 ; i++){
		// cout<<"Elemento del vector: ["<<i<<"]: "<<*direccion++<<endl;
		cout<<"Posiciones de memoria: "<<numeros[i]<<" es: "<<direccion++<<endl;
	}

	return 0;
}