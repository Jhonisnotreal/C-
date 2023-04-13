//Comparar cadenas - strcmp()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char palabra1[] = "Hola";
	char palabra2[] = "hola";

	char becerro[] = "becerro";
	char avion[] = "avion";

	if(strcmp(palabra1, palabra2)==0){
		cout<<"Ambas cadenas son iguales";
	}

	if(strcmp(palabra1, palabra2) < 0){
		cout<<becerro<<" esta despues alfabeticamente";
	}

	return 0;
}