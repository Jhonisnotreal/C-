#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numeros[5] = {1,4,3,1,2};
    int suma = 0, mayor=0;

    for(int i=0;i<5;i++){
        suma += numeros[i];  //aqui esta la suma de todos

        if(numeros[i] > mayor){
            mayor = numeros[i];
        }
    }

    if(mayor == suma-mayor){
        cout<<"El numero "<<mayor<<" equivale a la suma de los demas";
    }
    else{
        cout << "No existe ningun numero que sea igual a la suma de los demas";
    }

	getch();
    return 0;
}
