//Determinar si una palabra es polindroma

//oso = oso; reconocer = reconocer; anita lava la tina = anita lava la tina

#include<iostream>
#include<string.h>

using namespace std;

int main() {
	char palabra[20];
	char palabra2[20];

	cout<<"Ingrese una palabra: "; cin.getline(palabra, 20, '\n');

	strcpy(palabra2, palabra);

	strrev(palabra2);

	if(strcmp(palabra, palabra2)==0){
		cout<<palabra<<" es palindroma";
	}
	else {
		cout<<palabra<<" NO es polindromo";
	}


	return 0;
}