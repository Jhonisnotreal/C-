//Escriba un programa que calcule el valor de: 1-2+3…+n


#include<iostream>
using namespace std;

int main(){
	int n, suma = 0;
	
	cout<<"Digite el numero de elemento: "; cin>>n;
	
	for(int i=1; i<=n; i++){
		suma += i;
	}
	
	cout<<"\nLa suma es: "<<suma<<endl;
	
	return 0;
}
