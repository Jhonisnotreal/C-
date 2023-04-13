//Escriba un programa que calcule el resultado de: 1-2+3-4+5…n
// par = -2-4-6...
// impar = 1+3+5...

#include<iostream>
using namespace std;

int main(){
	int nElements, par, sumaPares=0, sumaImpares=0, sumaTotal = 0;
	
	cout<<"Digite el numero de elementos a sumar: "; cin>>nElements;
	
	for(int i=1; i<=nElements; i++){
		if(i%2==0){
			par = i*-1;
			sumaPares += par;
		}
		else{
			sumaImpares += i;
		}
	}
	
	sumaTotal = sumaPares + sumaImpares;
	
	cout<<"\nEl resultado de la suma es: "<<sumaTotal<<endl;
	
	return 0;
}
