#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	
	cout<<"Digite 3 numeros: "; cin>>a>>b>>c;
	
	if((a >= b) && (a >= c)){
		cout<<"\nEl mayor es: "<<a<<endl;
	}
	else if((b>=a)&&(b>=c)){
		cout<<"\nEl mayor es: "<<b<<endl;
	}
	else{
		cout<<"\nEl mayor es: "<<c<<endl;
	}
	return 0;
}
