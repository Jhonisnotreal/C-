#include<iostream>
using namespace std;

int main(){
	int n;
	
	cout<<"Digite un numero: "; cin>>n;
	
	if(n==0){
		cout<<"\nEl numero es cero"<<endl;
	}
	
	else if(n>0){
		cout<<"\nEl numero es positivo"<<endl;
	}
	
	else{
		cout<<"\nEl numero es negativo"<<endl;
	}
	
	return 0;
}
