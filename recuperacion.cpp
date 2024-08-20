#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

	int filas;
	int columnas;

	cout<<"Digite cantidad de filas por columnas: ";
	cin>>filas;
	
	columnas=filas;
	int matriz[filas][columnas];

for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			
		}
		
	}
	


			


	cout<<"Su matriz: \n";

	for (int i = 0; i <= filas; i++)
	{
		for (int j = 0; j <= columnas; j++)
		{
			cout<<matriz[i][j];
		}
		cout<<"\n";
	}
	
		return 0;
}
