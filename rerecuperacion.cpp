#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int matriz[7][7];
	char matriz2[7][7];
	
	char vector[49];
		int k=0;
	
	cout<<"Digite su matriz";
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cin>>matriz[i][j];
		}
		
	}
	

		for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			
			switch(matriz[i][j]){
				
				case 0: vector[k]=' ';k++;break;
				case 1: vector[k]='a';k++;break;
				case 2: vector[k]='e';k++;break;
				case 3: vector[k]='i';k++;break;
				case 4: vector[k]='o';k++;break;
				case 5: vector[k]='u';k++;break;
				case 6: vector[k]='b';k++;break;
				case 8: vector[k]='c';k++;break;
				case 10: vector[k]='d';k++;break;
				case 12: vector[k]='f';k++;break;
				case 14: vector[k]='g';k++;break;
				case 16: vector[k]='h';k++;break;
				case 18: vector[k]='j';k++;break;
				case 20: vector[k]='k';k++;break;
				case 22: vector[k]='l';k++;break;
				case 24: vector[k]='m';k++;break;
				case 26: vector[k]='n';k++;break;
				case 28: vector[k]='ñ';k++;break;
				case 30: vector[k]='p';k++;break;
				case 32: vector[k]='q';k++;break;
				case 34: vector[k]='r';k++;break;
				case 36: vector[k]='s';k++;break;
				case 38: vector[k]='t';k++;break;
				case 40: vector[k]='v';k++;break;
				case 42: vector[k]='w';k++;break;
				case 44: vector[k]='x';k++;break;
				case 46: vector[k]='y';k++;break;
				case 48: vector[k]='z';k++;break;
				
				default: vector[k]=0;k++;break;
			}
		}
		
	}
	
	cout<<"su vector es: ";
	for(int i=0;i<49; i++){
		cout<<vector[i];
	}
	
	int u=0;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			matriz2[i][j]=vector[u];
			u++;
		}
		
	}
	
	cout<<"Su matriz es: \n";
	
		for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
		cout<<matriz2[i][j];
		}
		
	}
	
	return 0;
}
