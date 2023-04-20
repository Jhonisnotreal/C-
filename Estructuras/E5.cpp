//
#include<iostream>
using namespace std;

struct Empleado{
	char nombre[20]; 
	float salario;
}emp[100];

int main(){
	int n_empleados, posM=0, posm=0;
	float mayor=0, menor=999999;

	cout<<"Digita el numero de Empleados: "; cin>>n_empleados;

	for(int i=0; i<n_empleados; i++){
		fflush(stdin);
		cout<<i+1<<" Nombre: "; cin.getline(emp[i].nombre, 20, '\n');
		cout<<i+1<<" Salario: "; cin>>emp[i].salario;
			
		//Empleado de mayor salario

		if(emp[i].salario>mayor){
			mayor = emp[i].salario;
			posM = i;
		}

		//Empleado de menor salario

		if(emp[i].salario < menor){
			menor = emp[i].salario;
			posm = i;
		}
		cout<<"\n";
	}

	cout<<"\nEl empleado de mayor salario es: "<<emp[posM].nombre<<" "<<emp[posM].salario;
	cout<<"\nEl empleado de menor salario es: "<<emp[posm].nombre<<" "<<emp[posm].salario;

	return 0;
}