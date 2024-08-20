#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


struct atleta1{
	
	int id;
	char nombre;
	int tiempo;
	
	atleta1 *sig;
};
atleta1 *cabeza, *fin, *p, *q, *r;

struct atleta2{
	
	int id;
	char nombre;
	int tiempo;
	
	atleta2 *sig;
};
 
atleta2 *cabeza2, *fin2, *p2, *q2, *r2;

void INGRESAR_ATLETA();
void  INFORME();
void   PROMEDIAR_TIEMPOS();
// void eliminar();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int op;
   do{

      system("cls");
      cout<< "MENU" << endl;
      cout<< "1. Agregar Atletas" << endl;
      cout<< "2. Informe         " << endl;
      cout<< "3. Promediar         " << endl;
      cout<< "4. Eliminar Nodo " << endl;
      cout<< "5 Salir" << endl << endl;
      cout<< "Seleccionar una opcion: ";
      cin>> op;
      switch(op)
      {
      	case 1: INGRESAR_ATLETA();
           break;

           case 2: INFORME();
            system("pause");
         	 break;
         	 
         
            case 3://PROMEDIAR_TIEMPOS();
            break;
            
             case 4:  //void eliminar();
            break;
            
            
         
      }//fin switch

   }while( (op>0)and(op<5));
}//fin main
	


void INGRESAR_ATLETA(){
	system("cls");
	char mas= 's';
	
	while(mas == 's'){		
		
		p = new (atleta1);
		
		if (p == NULL){
		
		cout<< " no hay memoria disponible";
	    }
		else{
			
			cout<< "ingrese Inicial atleta "; 
			cin>>p->nombre;
			cout<< "ingrese id atleta ";
			 cin>>p->id;
			cout<< "ingrese tiempo atleta ";
			cin>>p->tiempo;
			
			p->sig = NULL;
			
			if(cabeza == NULL){
					
				cabeza = p;
				fin = p;
				
			}else{
				if((cabeza->id)==(p->id)){
				q=cabeza;
				while(q->sig!=NULL){
					q=q->sig;
				}
				q->sig=p;
				fin=p;
				
			   }else{
			   		if(cabeza2==NULL){
			   	
				    	p2 = new (atleta2);
			   	 
			   	 		p2->nombre = p->nombre;
			   	 		p2->id=p->id;
			   	 		p2->tiempo=p->tiempo;
			   	 
			   	 		p2->sig=NULL;
			   	 
			   			if(cabeza2==NULL){
			   					cabeza2 = p2;
								fin2 = p2;
			   	
						   }else{
			   	
				  			 	if((cabeza2->id)==(p2->id)){
									q2=cabeza2;
									while(q2->sig!=NULL){
										q2=q2->sig;
									}
									q2->sig=p2;
									fin2=p2;
									}
			   				}
				   
				   
				   	
			   	 
			  		 	}
				}
			}
			
			if((cabeza!=NULL)and(cabeza2!=NULL)){
					if((p->id!=cabeza->id)and(p->id!=cabeza2->id)){
				cout<<"Solo se pueden agregar hasta 2 atletas";
			}
			}
		
			
				
					
				
					
				}
				
			cout<< " digite s/n si va a continuar"; 
		cin>>mas;	
		}
		
		
	
	}
	
	
	




void INFORME()
{
cout<<" .: Informe de Atletas:. \n\n";
  if (cabeza == NULL){
  	
  	cout<<" no hay atletas \n";
  	
  	
  }else{
  	
  	cout<<"Atleta1 \n";
  	q = cabeza;
  	
  	while (q != NULL){
  		
  		cout<<"\n Id -> ";
  		cout<<(q->id);
  		cout<<"\n Inicial -> ";
  		cout<<(q->nombre);
  		cout<<"\n Tiempo -> ";
  		cout<<(q->tiempo);
  		cout<<"\n";
  		q = q->sig;
  		
	  }
	 
	 
	 
	 if(cabeza2!=NULL){
		 		  cout<<"Atleta2 \n";
           			q2 = cabeza2;
           			
           			cout<<"mostrando cabeza";
           			cout<<"\n Id -> ";
					  		cout<<(cabeza2->id);
					  		cout<<"\n Inicial -> ";
					  		cout<<(cabeza2->nombre);
					  		cout<<"\n Tiempo -> ";
					  		cout<<(cabeza2->tiempo);
					  			cout<<"\n";
           			
           				cout<<"mostrando fin";

           				cout<<(fin2->id);
					  		cout<<"\n Inicial -> ";
					  		cout<<(fin2->nombre);
					  		cout<<"\n Tiempo -> ";
					  		cout<<(fin2->tiempo);
					  			cout<<"\n";
  	
//				  	while (q2->sig != NULL){
//				  		
//					  		cout<<"\n Id -> ";
//					  		cout<<(q2->id);
//					  		cout<<"\n Inicial -> ";
//					  		cout<<(q2->nombre);
//					  		cout<<"\n Tiempo -> ";
//					  		cout<<(q2->tiempo);
//					  			cout<<"\n";
//					  		q2 = q2->sig;
//				  	
//					  }
	 }
	  

  	
  }
  
}
  
