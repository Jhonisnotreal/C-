#include<iostream>
using namespace std;

void tiempo(int, int&, int&, int&);

int main(){
	int totalSeg, horas, min, seg; 

	cout<<"Digita el total de segundos: "; cin>>totalSeg;

	tiempo(totalSeg, horas, min, seg);

	cout<<"\nTotal de segundos: "<<totalSeg<<endl;
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundos: "<<seg<<endl;
}

void tiempo(int totalSeg, int& horas, int& min, int& seg){
	horas = totalSeg / 3600;
	totalSeg %= 3600;
	min = totalSeg/60;
	seg = totalSeg%60;
}