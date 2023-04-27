#include<iostream>
using namespace std;

template <class T>
T max(T dato1, T dato2, T dato3);

int main(){
	int dato1 = 4, dato2 = 6, dato3 = 8;

	char d1 = 'o', d2 = 'c', d3 = 'b';

	cout<<"El dato mayor es: "<<max(dato1, dato2, dato3)<<endl;
	cout<<"El dato mayor es: "<<max(d1, d2, d3)<<endl;

	return 0;
}

template <class T>
T max(T dato1, T dato2, T dato3){
	T max;

	if((dato1>=dato2) && (dato1 >= dato3)){
		max = dato1;
	}
	else{
		if((dato2>=dato1) && (dato2>=dato3)){
			max = dato2;
		}
		else {
			max = dato3;
		}
	}
	return max;
}