//Cuantas vocales hay en una cadena

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char cadena[30];
	int a=0, v_e=0, v_i=0, o=0, u=0;

	cout<<"Digita una oracion: "; cin.getline(cadena, 30, '\n');

	for(int i=0; i<30; i++){
		switch(cadena[i]){
			case 'a': a++; break;
			case 'e': v_e++; break;
			case 'i': v_i++; break;
			case 'o': o++; break;
			case 'u': u++; break;
		}
	}

	cout<<"Vocal a: "<<a<<endl;
	cout<<"Vocal e: "<<v_e<<endl;
	cout<<"Vocal i: "<<v_i<<endl;
	cout<<"Vocal o: "<<o<<endl;
	cout<<"Vocal u: "<<u<<endl;

	return 0;
}