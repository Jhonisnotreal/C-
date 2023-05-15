// Hallar el max elemento de un arreglo

#include<iostream>
using namespace std;

int hallarMax(int *, int);

int main(){
	const int nElemn = 5;
	int numeros[nElemn]= {4,5,2,6,7};

	cout<<"El mayor elemento es: "<<hallarMax(numeros, nElemn);

	return 0;
}

int hallarMax(int *dirVec, int nElemn){
	int max = 0;

	for(int i = 0; i<nElemn; i++){
		if(*(dirVec+i) > max){
			max = *(dirVec+i);
		}
	}

	return max;
}