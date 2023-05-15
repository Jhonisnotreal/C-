#include<iostream>

using namespace std;

void intercambio(float *, float *);

int main(){
	float num1 = 20, num2 = 6.78;

	cout<<"Valor inicial num1: "<<num1<<endl;
	cout<<"Valor inicial num2: "<<num2<<endl;

	intercambio(&num1, &num2); 

	cout<<"\n\nDespues del intercambio: \n\n";
	cout<<"Nuevo valor de num1: "<<num1<<endl;
	cout<<"Nuevo valor de num2: "<<num2<<endl;

	return 0;

}

void intercambio(float *num1, float *num2){
	float aux;
	
	// Intercambiando las direcciones de los numeros
	aux = *num1; //direccion num1
	*num1 = *num2;
	*num2 = aux;	
}