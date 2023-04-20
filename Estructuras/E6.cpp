//
#include<iostream>
using namespace std;

struct Atleta{
	char nombre[20], pais[20];
	int medallas;

}atletas[100];

int main(){
	int nAtletas, mayor=0, pos;

	cout<<"Digita el numero de atletas: "; cin>>nAtletas;

	for(int i=0; i<nAtletas; i++){
		fflush(stdin);

		cout<<i+1<<" Nombre: "; cin.getline(atletas[i].nombre, 20, '\n');
		cout<<i+1<<" Pais: "; cin.getline(atletas[i].pais, 20, '\n');
		cout<<i+1<<" No. Medallas: "; cin>>atletas[i].medallas;
		cout<<"\n";

		if(atletas[i].medallas > mayor){
			mayor = atletas[i].medallas;
			pos = i;
		}
	}

	cout<<"El max no. de medallas es: "<<atletas[pos].medallas<<" de "<<atletas[pos].nombre<<" y su pais: "<<atletas[pos].pais<<endl;

	return 0;
}