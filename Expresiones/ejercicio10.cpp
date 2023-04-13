#include<iostream>
#include<math.h>

using namespace std;
int main(){
	float a, b, c, resultado1 = 0, resultado2 = 0;
	
	cout<<"Digite valor de a: "; cin>>a;
	cout<<"Digite valor de b: "; cin>>b;
	cout<<"Digite valor de c: "; cin>>c;
	
	resultado1 = (-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	resultado2 = (-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	
	cout<<"\n El resultado1 es: "<<resultado1<<endl;
	cout<<"\n El resultado2 es: "<<resultado2<<endl;
	
	return 0; 
}
