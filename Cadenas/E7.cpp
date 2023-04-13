//agrega o concatena una cadena con otra - strcat()

#include<iostream>
#include<string.h>

using namespace std;

int main() {
	char cad1[] = "Esto es una cadena", cad2[] = " de ejemplo", cad3[30];

	strcpy(cad3, cad1);

	strcat(cad3, cad2);

	cout<<cad3<<endl;

	return 0;
}