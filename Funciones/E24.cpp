//Devuelve la fecha mas reciente de cualquier par de fechas que se le transmitan
//10/9/2005 y 11/3/2015 se devuelve la segunda
#include<iostream>
using namespace std;

struct Fecha{
	int dia, mes, anio;
} f1, f2;

void pedirDatos();
Fecha mayor(Fecha, Fecha);
void muestra(Fecha);

int main(){
	pedirDatos();

	Fecha x = mayor(f1, f2);

	muestra(x);

	return 0;
}

void pedirDatos(){
	cout<<"Digita los datos para la 1ra fecha: "<<endl;
	cout<<"Dia: "; cin>>f1.dia;
	cout<<"Mes: "; cin>>f1.mes;
	cout<<"Anio: "; cin>>f1.anio;

	cout<<"\nDigita los datos para la 2da fecha: "<<endl;
	cout<<"Dia: "; cin>>f2.dia;
	cout<<"Mes: "; cin>>f2.mes;
	cout<<"Anio: "; cin>>f2.anio;
}

Fecha mayor(Fecha f1, Fecha f2){
	Fecha mayorFecha;

	if((f1.anio >= f2.anio) && (f1.mes >= f2.mes) && (f1.dia >= f2.dia)){
		mayorFecha = f1;
	} 
	else {
		mayorFecha = f2;
	}

	return mayorFecha;
}

void muestra(Fecha x){
	cout<<"\nLa fecha mas reciente es: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;
}