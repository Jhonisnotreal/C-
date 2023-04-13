#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float cateto1, cateto2, hipotenusa;
	
	cout<<"Escribe el cateto 1: "; cin>>cateto1;
	cout<<"Escribe el cateto 2: "; cin>>cateto2;
	
	hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));
	
	cout.precision(2);
	cout<<"\nLa hipotenusa es: "<<hipotenusa<<endl;
	
	
	return 0;
}
