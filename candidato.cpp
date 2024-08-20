#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
		int n=0;
		cout<<"Escriba el numero de candidatos";
		cin>>n;
	
		int matriz [12][n];
		int vector[n];
		int cont=0;


	cout<<"Escriba los resultados de cada candidato";

	for (int i = 0; i < n; i++)
	{	
		
				cout<<"Canditato "<<i+1<<": ";
				cin>>vector[i];
				cout<<"\n";
	

    }
	
	for (int i = 0; i < 7; i++)
	{	
		for (int j = 0; j < n; j++)
		{	
			cont=cont+matriz[i][j];
		}
		vector[i]=cont;
		cont=0;
		
    }
	
	
	
	for(int i=0; i<7; i++){
		
		cout<<endl;
		cout<<vector[i];
	}
	
	return 0;
}
