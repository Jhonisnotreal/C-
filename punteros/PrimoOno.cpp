//Numero primo o no con punteros y mostrar la posicion en 
//memoria donde esta guardado

#include<iostream>
using namespace std;

int main(){
	int num, *dir, cont = 0;

	cout<<"Digita un numero: "; cin>>num;

	dir = &num;

	for(int i = 1; i<*dir; i++){
		if(*dir % i == 0){
			cont++;
		}
	}

	if(cont>2){
		cout<<"El numero "<<*dir<<" no es primo"<<endl;
		cout<<"Posicion: "<<dir<<endl; 
	}
	else {
		cout<<"El numero "<<*dir<<" ES PRIMO"<<endl;
		cout<<"Posicion: "<<dir<<endl; 	
	}

	return 0;
}