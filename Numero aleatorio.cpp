#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mostrar(int b[], int tamano){
	
	for(int i=0; i<tamano; i++){
		cout<<b[i]<<" ";
		cout<<endl;
	} 
	
}


int main() {
        
        const int tamano = 20;
        int a[tamano];
        
        
        for (int i = 0; i<tamano; i++){
        	a[i] = 1 + rand() % 50;
		}
		
		
		mostrar(a,tamano);
        
	
	system("pause");
		return 0;
}
