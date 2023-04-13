//Escriba un programa que lea de la entrada estandar 3 numeros, despues debe leer un 
//cuarto numero e indicar si el numero coincide con alguno de los anteriores

#include<iostream>
using namespace std;

int main(){
	int n1, n2, n3, n4;
	
	cout<<"Digite 3 numeros separados: "; cin>>n1>>n2>>n3; 
	
	cout<<"\nDigite otro numero: "; cin>>n4;
	
	if((n4==n1) || (n4==n2) || (n4==n3)){
		cout<<"\nEl cuarto numero coincide con al menos uno de los 3 anteriores"<<endl;
	}
	else{
		cout<<"\nEl cuarto numero no coincide con ninguno"<<endl;
	}
	
	
	return 0; 
}
