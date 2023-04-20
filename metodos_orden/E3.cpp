//Orden por seleccion
#include<iostream>

using namespace std;
int main(){
	int nums[] = {4,3,5,2,1};
	int i, j, aux, min;

	//Algoritmo
	for(i=0; i<5; i++){
		min = i;
		for(j=i+1; j<5; j++){
			if(nums[j] < nums[min]){
				min = j;
			}
		}
		aux = nums[i];
		nums[i] = nums[min];
		nums[min] = aux;
	}

	cout<<"Orden Ascendente: ";
	for(i=0; i<5; i++){
		cout<<nums[i]<<" ";
	}

	cout<<"Orden Descendente: ";
	for(i=4; i>=0; i--){
		cout<<nums[i]<<" ";
	}

	return 0;
}