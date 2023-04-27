#include<iostream>
using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);

int main(){
	int num = 29;
	float n = 49.59;
	double dato2 = 234.3456;
	char nombre = 'a';

	despliegue(num);
	despliegue(n);
	despliegue(dato2);
	despliegue(nombre);

	return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){
	cout<<"Desplegando el dato: "<<dato<<endl;
}