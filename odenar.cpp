#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int vector1[10];
	int vector2[10];
	int vector3[20];

	
	cout<<"llenado de vector 1";


	for (int i = 0; i < 10; i++)
	{	
			cin>>vector1[i];
	}

	
	
	cout<<"llenado de vector 2";

	for (int i = 0; i < 10; i++)
	{
		cin>>vector2[i];
	}


	for (int i = 0; i < 10; i++)
		{
			vector3[i]=vector1[i];
		}
	


	for (int i = 0; i < 10; i++)
		{
			vector3[i+10]=vector2[i];
		}

cout<<"Su vector es: ";




for (int i = 0; i < 20; i++)
		{
			cout<<vector3[i];
		}
	
	
	
	int men=vector3[0];
	int aux;
	
	for (int i = 0; i < 20; i++)
	{
		if(men>vector3[i]){
			aux=men;
			men=vector3[i];
			vector3[i]=aux;

		}
	}
	
	cout<<"Su vector es: ";




for (int i = 0; i < 20; i++)
		{
			cout<<vector3[i];
		}
	
	return 0;
}
