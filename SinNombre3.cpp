#include <iostream>

using namespace std;


int main(){

	int vector[100];
	int cont;
	int k;
	int tam=100;

	for(int i=1; i<=100; i++){
		
	  	cont=0;
		for(int j=1; j<=i; j++){
		
			if(i%j==0){
				cont++;
			}
		}
		
		if(cont<=2){
			vector[k]=i;
			k++;
		}
	}
	
	for(int i=0; i<k; i++ ){
		
		cout<<"\n"<<vector[i];
	}

}

