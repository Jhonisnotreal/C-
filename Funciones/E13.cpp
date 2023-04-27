//Toma en cuenta un año de 365 dias y los meses de 30 dias cada uno
#include<iostream>
using namespace std;

void calc_anios(int, int&, int&, int&);

int main(){
	int nDias, anio, mes, dia; 

	cout<<"Digita el numero total de dias: "; cin>>nDias;

	calc_anios(nDias, anio, mes, dia);

	cout<<"\nFecha Actual: "<<dia+1<<"/"<<mes+1<<"/"<<anio+2000<<endl;

	return 0;
}

void calc_anios(int nDias, int& anio, int& mes, int& dia){
	anio = nDias/365;
	nDias %= 365;

	mes = nDias/30;
	dia = nDias%30;


}