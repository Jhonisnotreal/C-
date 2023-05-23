//Recursividad 

// Factorial de 5! = 120
#include<iostream>
using namespace std;

int factorial(int);

int main(){
	cout<<"Factorial: "<<factorial(3)<<endl;

	return 0;
}

int factorial(int n){
	if(n==0){
		n = 1;
	}
	else {
		n *= factorial(n-1);
	}
	return n;
}