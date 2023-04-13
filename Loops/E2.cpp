/*
Realice un programa que lea de la entrada estandar numeros hasta que se introduzca un 0. En ese momento
el programa debe terminar y mostrar en la salida estandar el numero de valores que cero leidos

*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int num, conteo = 0;
	
	do{
		cout<<"Digite un numero: "; cin>>num;
		
		if(num>0){
			conteo++;
		}
	}while(num != 0);
	
	cout<<"\nEl numero de valores mayores a 0 es: "<<conteo<<endl;
	
	getch();
	return 0;
}
