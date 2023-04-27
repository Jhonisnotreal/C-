#include<iostream>
using namespace std;

struct Etapas{
	int horas, minutos, segundos;
}et[100];

int main(){
	int no_et, horasT=0, minT=0, sT=0;

	cout<<"Digita etapas de la carrera: "; cin>>no_et;

	for(int i=0; i<no_et; i++){
		cout<<"Horas: "; cin>>et[i].horas;
		cout<<"Minutos: "; cin>>et[i].minutos;
		cout<<"Segundos: "; cin>>et[i].segundos;

		horasT = horasT + et[i].horas;
		minT += et[i].minutos;
		if(minT >= 60){
			minT -= 60;
			horasT++;
		}
		sT += et[i].segundos;
		if(sT >= 60){
			sT -= 60;
			minT++;
		}
		cout<<"\n";
	}

	cout<<"\nTiempo total\n";
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minT<<endl;
	cout<<"Segundos: "<<sT<<endl;

	return 0;
}