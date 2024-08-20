#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
		int n=0;
		cout<<"Escriba el numero de personas que califican el servicio \n";
		cin>>n;
	
		int matriz [4][n];
		float vector[4];
		float vector2[4];
		float vector3[4];
		int aspecto[4];
		int variable;
		int cont=0;
		
	for(int i=0; i<4; i++){
	
	aspecto[i]=i;
	}
	
		
		
		cout<<"escriba sus calificaciones: \n";
		
		for (int i = 0; i < 4; i++)
	{	
		for (int j = 0; j < n; j++)
		{	   
		
			do{
				cout<<"lea variable "<<i+1<<""<<j+1<<": \n";
				cin>>variable;
			}while((variable<0) || (variable>10));
		     
		     matriz[i][j]=variable;
				
				
		}

    }
    
    cout<<"Su matriz es: \n";
		
		for (int i = 0; i < 4; i++)
	{	
		for (int j = 0; j < n; j++)
		{	
				cout<<matriz[i][j];
		}
		cout<<"\n";
    }
    
		
		for (int i = 0; i < 4; i++)
	{	
		for (int j = 0; j < n; j++)
		{	
			cont=cont+matriz[i][j];
		}
		vector[i]=cont;
		cont=0;
		
    }
	
	cout<<"Las sumas son: ";
	for(int i=0; i<4; i++){
		
		cout<<"\n";
		cout<<vector[i];
	}	
	
	cout<<"el promedio de cada servicio es: \n";
	
	for(int i=0; i<4; i++){
	
	
		vector2[i]=vector[i]/n;
	}
	
	for(int i=0; i<4; i++){
	
	cout<<"\n";
	 cout<<	vector2[i];
	}
		
	for(int i=0; i<4; i++){
	
	vector3[i]=vector2[i];
	}	
		
    cout<<"el promedio de cada servicio ordenado es: \n";
	
	
	float aux=0;
	int auxA=0;

			
	for (int i=1; i<4; i++){
	
        for(int j=0 ; j<4 - 1; j++){
		
              if (vector3[j] > vector3[j+1]){
			  
                   aux = vector3[j];
                  vector3[j] = vector3[j+1];
                   vector3[j+1] = aux;
                   
			}
		
		}
	}
	
	int j=0;
	for(int i=3; i>=0; i--){
	
	    cout<<vector3[i];
	    cout<<endl;
	 
	}
	
	cout<<"orden aspecto";
	
	for(int i=0; i<4; i++){
	  for(int j=0; j<4; j++){	
		  if(vector3[i]==vector2[j]){
		  	 aspecto[i]=
	  }
	 
     }
	 
	}	
	return 0;
}
