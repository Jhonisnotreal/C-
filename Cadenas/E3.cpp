//Copia el contenido de una cadena a otra con strcpy()

#include<iostream>
#include<string.h>

using namespace std;

int main(){
	char a[] = "Juan";
	char b[20];

	strcpy(b, a);

	cout<<b<<endl;


	return 0;
}