#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	
	int filas;
	int columnas;

	cout<<"Digite cantidad de filas por columnas: ";
	cin>>filas;
	columnas=filas;
int 	matriz[filas][columnas];

	cout<<"Digite su matriz: \n";

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cin>>matriz[i][j];
		}
		
	}
		
	cout<<"Su matriz es: \n";

	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			cout<<matriz[i][j];
		}
		cout<<"\n";
		
	}
	
	
	cout<<"\n los superiores de la diagonal principal son: \n";
   
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if(j>i){

				cout<<matriz[i][j]<<" ";
				
			}
		}
		
		
	}

	cout<<"\n los inferiores de la diagonal principal son: \n";
   
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if(i>j){

				cout<<matriz[i][j]<<" ";
				
			}
		}
		
		
	}


	cout<<"\n los superiores de la diagonal secundaria son: \n";
   
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if(i+j<filas-1){

				cout<<matriz[i][j]<<" ";
				
			}
		}
		
		
		
		
		
	}

	cout<<"\n los inferior de la diagonal secundaria son: \n";
   
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if(i+j>filas-1){

				cout<<matriz[i][j]<<" ";
				
			}
		}
		
		
	}

	cout<<"\n los intersectos1 de la diagonal principal son: \n";
   
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if((i>j)&&(i+j<filas-1)){

				cout<<matriz[i][j]<<" ";
				
			}
		}
		
		
	}
	
	cout<<"\n los intersectos2 de la diagonal principal son: \n";
   
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if((j>i)&&(i+j<filas-1)){

				cout<<matriz[i][j]<<" ";
				
			}
		}
		
		
	}

	cout<<"\n los intersectos3 de la diagonal principal son: \n";
   
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if((j>i)&&(i+j>filas-1)){

				cout<<matriz[i][j]<<" ";
				
			}
		}
		
		
	}

	cout<<"\n los intersectos4 de la diagonal principal son: \n";
   
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			if((i>j)&&(i+j>filas-1)){

				cout<<matriz[i][j]<<" ";
				
			}
		}
		
		
	}

   return 0; 

}
