/*7. Haz un programa que defina 2 vectores de carateres y despues almacene el
contenido de ambos vectores en un nuevo vector, situando en primer lugar los 
elementos del primer vector seguido por los elementos del segundo vector. Muestre 
el contenido del nuevo vector en la salida estandar */

#include<iostream> 
#include<conio.h>

using namespace std;

int main(){
	char letras1[] = {'a','b','c','d','e'}; //Al ser characters llevan ''
	char letras2[] = {'f','g','h','i','j'};
	char letras3[10]; //Le pones 10 porque el letras1 y el 2 llevan 5 elementos c/u
	
	//Copiando los elementos del arreglo(lista) de letras1 a letras3
	for(int i=0;i<5;i++){ //i<5 porque
		letras3[i] = letras1[i];
	}

	//Copiando elementos de letras2 a letras3
	for(int i=5; i<10; i++) {
		letras3[i] = letras2[i-5];
	}
	
	//Mostrar el nuevo vector
	for(int i=0; i<10; i++){
		cout<<letras3[i]<<endl;
	}

	
	getch();
	return 0;
}
