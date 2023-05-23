//Suma de numeros complejos

/* 
z1 = 5 - 3i, z2 = -4 + 2i

z1 + z2 = (5-3i) + (-4 + 2i)
		= 5 - 3i -4 + 2i
		= 1 - i
*/

#include<iostream>
using namespace std;

struct Complejo {
	float real, imaginaria;
} z1, z2;

void pedirDatos();
Complejo suma(Complejo, Complejo);
void muestra(Complejo);

int main(){
	pedirDatos();

	Complejo x = suma(z1,z2);

	muestra(x);
	
	return 0;
}

void pedirDatos(){
	cout<<"Digita los datos para el primer numero complejo: "<<endl;
	cout<<"Numero real: "; cin>>z1.real;
	cout<<"Numero imaginario: "; cin>>z1.imaginaria;

	cout<<"\nDigita los datos para el segundo numero complejo: "<<endl;
	cout<<"Numero real: "; cin>>z2.real;
	cout<<"Numero imaginario: "; cin>>z2.imaginaria;	
}

Complejo suma(Complejo z1, Complejo z2){
	z1.real += z2.real;
	z1.imaginaria += z2.imaginaria;

	return z1;
}

void muestra(Complejo x){
	cout<<"\nResultado: "<<x.real<<" , "<<x.imaginaria<<endl;
}