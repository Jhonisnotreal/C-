//Invertir una cadena - strrev()

#include<iostream>
#include<string.h>

using namespace std;

int main() {
	char cad[] = "Hola soy una cadena";
	char a[] = "reconocer";

	strrev(cad);
	strrev(a);

	cout<<cad<<endl;
	cout<<a<<endl;

	return 0;
}