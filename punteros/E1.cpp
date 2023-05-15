// Las variables punteros (de direccion) solo aplican para int
// &n = direccion de memoria de n
// *n - variable cuya direccion esta almacenada en n

#include<iostream>
using namespace std;

int main(){
	int num, *dir_num;

	num = 20;
	dir_num = &num;

	cout<<"Numero: "<<num<<endl;
	cout<<"Direccion de mem: "<<&num<<endl;

	cout<<"-----------\n";

	cout<<"Numero: "<<*dir_num<<endl;
	cout<<"Direccion de mem: "<<dir_num<<endl;

	return 0;
}