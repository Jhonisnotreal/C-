//Pasar una palabra a minuscula - strlwr()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char a[23]; 

	cout<<"Digita una palabra en mayusculas: "; cin.getline(a, 23, '\n');

	strlwr(a);	

	cout<<a<<endl;

	return 0;
}