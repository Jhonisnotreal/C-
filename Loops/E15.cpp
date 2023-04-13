/* Realice un programa que solicite al usuario que piense un numero entero de 1-100. 
El programa debe generar un numero aleatorio en ese rango e indicar le al usuario 
si el numero que digito es menor o mayor al numero aleatorio, asi hasta que adivine y 
mostrar le el numero de intentos de le llevo 

variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);
*/


#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
	int numero, dato, contador = 0;	
	
	srand(time(NULL));//genera un numero aleatorio;
	dato = 1 + rand() % (100);
	
	do{
		cout<<"Digite un numero: "; cin>>numero;
		
		if(numero>dato){
			cout<<"\nDigite un numero menor\n";
		}
		if(numero<dato){
			cout<<"\nDigite un numero mayor\n";
		}
		contador++;
	}while(numero != dato);
	
	cout<<"\nFelicidades adivinaste el numero!\n";
	cout<<"Numero de intentos: "<<contador<<endl;
	
	system("pause");
	return 0;
}
