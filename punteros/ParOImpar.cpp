//Señala la posicion de memoria del numero par o impar

#include<iostream>
using namespace std;

int main(){
	int numero, *dir;

	cout<<"Digita un numero: "; cin>>numero;

	dir = &numero;

	if(*dir % 2 == 0){
		cout<<"El numero "<<*dir<<" es par "<<endl;
		cout<<"Posicion: "<<dir<<endl;
	}
	else {
		cout<<"El numero "<<*dir<<" es impar "<<endl;
		cout<<"Posicion: "<<dir<<endl;
	}

	return 0;
}