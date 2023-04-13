#include<iostream>
using namespace std;

int main(){
	float a, b, c, d, e, f, resultado=0;
	
	cout<<"Digite valor de a: "; cin>>a;
	cout<<"Digite valor de b: "; cin>>b;
	cout<<"Digite valor de c: "; cin>>c;
	cout<<"Digite valor de d: "; cin>>d;
	cout<<"Digite valor de d: "; cin>>e;
	cout<<"Digite valor de d: "; cin>>f;
	
	resultado = (a+b/c)/(d+e/f);
	
	cout.precision(2);
	
	cout<<"El resultado es: "<<resultado<<endl;
	return 0;
}
