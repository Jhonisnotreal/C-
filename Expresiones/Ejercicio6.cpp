#include<iostream>

using namespace std;
int main(){
	float nota1, nota2, nota3, promedio;
	
	cout<<"Digite la primera nota: "; cin>>nota1; 
	cout<<"Digite la segunda nota: "; cin>>nota2;
	cout<<"Digite la tercera nota: "; cin>>nota3;
	
	promedio=(nota1+nota2+nota3)/3;
	
	cout.precision(2);
	cout<<"\nEl promedio de las 3 notas es: "<<promedio<<endl;
	
	return 0;
}
