#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Digite un numero: "; cin>>n;
	
	if(n==0){
		cout<<"El numero es 0";
	}
	else if(n%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}
	
	return 0;
}
