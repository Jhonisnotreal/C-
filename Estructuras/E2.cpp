//Estructuras Anidadas
#include<iostream>
using namespace std;

struct info_direccion{
	char direccion[30], ciudad[20], provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main(){

	for(int i=0; i<2; i++){
		fflush(stdin); //Vaciar el buffer y permitir digitar los valores
		cout<<"Digita nombre: "; cin.getline(empleados[i].nombre, 20, '\n');
		cout<<"Digita su direccion: "; cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
		cout<<"Digita la ciudad: "; cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');
		cout<<"Digita la provincia: "; cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');
		cout<<"Digita el salario: "; cin>>empleados[i].salario;
		cout<<"\n";
	}

	for(int i=0; i<2; i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		cout<<"\n";
	}

	return 0;
}