#include <iostream>
#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int cont=0;

int main(int argc, char** argv) {
	
	int a[10];
	
	cout<<"INGRESO DE UN VECTOR \n";
	
	for(int i=0; i<10; i++){
		cin>>a[i];
		
	}
	
	cout<<"su vector \n";
	
	for(int i=0; i<10; i++){
		cout<<a[i];
		cout<<endl;
	}
	
	cout<<"las posiciones pares son: \n";
	
	for(int i=0; i<10; i++){

      if (i%2==0)
      {
      	cout<<a[i];
		cout<<endl;
		cont=cont+a[i];
      }
		
	}

	  cout<<"el total de los pares es: \n ";
   cout<<cont;

	
cout<<"las posiciones impares son: \n";
	
	cont=0;
	
	for(int i=0; i<10; i++){

      if (i%2!=0)
      {
      	cout<<a[i];
		cout<<endl;
		cont=cont+a[i];
      }
		
	}

	  cout<<"el total de los pares es: \n ";
   cout<<cont;

	system("pause");
}
