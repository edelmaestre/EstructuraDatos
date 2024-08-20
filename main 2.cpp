#include <iostream>
#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int cont=0;

int main() {
	int a[10];

	cout<<"Ingreso del vector \n";

	for(int i=0; i<10; i++){
         cin>>a[i];
	}


cout<<"su vector \n";

	for(int i=0; i<10; i++){
         cout<<a[i];
	}


cout<<" Numeros pares en Posisiones impares del vector \n";

	for(int i=0; i<10; i++){
         if(i%2!=0){
            if(a[i]%2==0){
            	cout<<endl;
            	cout<<a[i]; cout<< "en la posicion:"; cout<< i;
            	cont=cont+a[i];
            }
         }
	}

	cout<<"\n la suma es: ";
	cout<<cont;
	cont=0;



cout<<" \n Numeros impares en Posisiones pares del vector \n";

	for(int i=0; i<10; i++){
         if(i%2==0){
            if(a[i]%2!=0){
            	cout<<endl;
            	cout<<a[i]; cout<< "en la posicion:"; cout<< i;
            	cont=cont+a[i];
            }
         }
	}

	cout<<"\n la suma es: ";
	cout<<cont;
	cont=0;

	system("pause");
}
