/*En una clase de 5 alumnos se han hecho 3 examenes y se requiere determinar el numero de:
	a) alumnos que aprobaron todos los examenes 
	b) alumnos que aprobaron al menos 1
	c) alumnos que aprobaron solo el ultimo examen

Realice un programa que permita la lectura de los datos y el calculo de las estadisticas  */

#include<iostream>
using namespace std;

int main(){
	float exam1, exam2, exam3;
	int aprobadosTodos=0, aprobadosUno=0, aprobadosUltimo=0;
	
	for(int i=1; i<=5; i++){
		cout<<i<<". Digite la nota del primer examen: "; cin>>exam1;
		cout<<i<<". Digite la nota del segundo examen: "; cin>>exam2;
		cout<<i<<". Digite la nota del tercer examen: "; cin>>exam3;
		cout<<"\n";
		
		if((exam1>10.5)&&(exam2>10.5)&&(exam3>10.5)){
			aprobadosTodos++;
		}
		if((exam1>10.5)||(exam2>10.5)||(exam3>10.5)){
			aprobadosUno++;
		}
		if((exam1<10.5)&&(exam2<10.5)&&(exam3>10.5)){
			aprobadosUltimo++;
		}
	}
	
	cout<<"\nAlumnos que aprobaron todos los examenes: "<<aprobadosTodos<<endl;
	cout<<"\nAlumnos que aprobaron al menos un examen: "<<aprobadosUno<<endl;
	cout<<"\nAlumnos que aprobaron solo el ultimo examen: "<<aprobadosUltimo<<endl;
	
	return 0;
}
