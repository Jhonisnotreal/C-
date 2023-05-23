//Funcion que devuelve numeros de inicio a fin
//En orden ascendente

#include<iostream>
using namespace std;

int numeros(int, int);

int main(){
	int ini, fin;

	cout<<"Digita el inicio: "; cin>>ini;
	cout<<"Digita el fin: "; cin>>fin;

	for(int i=ini; i<=fin; i++){
		cout<<numeros(i, fin)<<" ";
	}

	return 0;
}

int numeros(int ini, int fin){

	if(ini == fin){
		return ini;
	}
	else {
		return numeros(ini, fin-1);
	}
}