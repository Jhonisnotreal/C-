//Paso de Param por referencia

#include<iostream>
using namespace std;

void valNuevo(int&, int&);

int main(){
	int num1, num2;

	cout<<"Digita 2 valores: "; cin>>num1>>num2;

	valNuevo(num1, num2);

	cout<<"Nuevo valor del primer numero: "<<num1<<endl;
	cout<<"Nuevo valor del segundo numero: "<<num2<<endl;

	return 0;

}

void valNuevo(int& xnum, int& ynum){
	cout<<"El valor del primer numero es: "<<xnum<<endl;
	cout<<"El valor del segundo numero es: "<<ynum<<endl;

	xnum = 89;
	ynum = 69;
}