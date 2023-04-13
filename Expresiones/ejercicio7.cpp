#include<iostream>
using namespace std;

int main(){
	float practica, teorica, participacion, nota_final;
	
	cout<<"Digite nota de practicas: "; cin>>practica;
	cout<<"Digite nota teorica: "; cin>>teorica;
	cout<<"Digite nota de participacion: "; cin>>participacion;
	
	practica *= 0.30;
	teorica *= 0.60;
	participacion *= 0.10;
	
	nota_final = practica + teorica + participacion; 
	
	cout<<"\nLa nota final es: "<<nota_final;
	
	return 0;
}
