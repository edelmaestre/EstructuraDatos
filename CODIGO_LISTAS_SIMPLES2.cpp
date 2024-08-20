#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

struct participante 
{
   long REFE;
   char ARTI[50];
   participante  *sig;
} *cabeza, *fin, *p, *q, *r;

INGRESAR_ARTICULO(){
	char mas= 's';
	
	while(mas == 's'){		
		
		fin = new (participante);
		
		if (fin == NULL){
		
		cout<< " no hay memoria disponible";
	}
		else{
			
			cout<< " Refenrencia "; cin>>fin->REFE;
			
			cout<<"Articulo "; 	fflush(stdin);	gets(fin->ARTI);
			fin->sig = NULL;
			if(cabeza == NULL){
					
				cabeza = fin;
			}
				else{
					
					q= cabeza;
					while(q->sig != NULL){
						
						q=q->sig;
						
						
					}
					
					q->sig=fin;
					
				}
				
			
		}
		
		
		cout<< " digite s/n si va a continuar"; 
		mas = getch();
	}
	
	
	
}
 INFORME()
{

  if (cabeza == NULL){
  	
  	cout<<" no hay articulos ";
  	
  	
  }else{
  	
  	q = cabeza;
  	
  	while (q != NULL){
  		
  		cout<<(q->REFE);
  		cout<<(q->ARTI)<<endl;
  		
  		q = q->sig;
  		
	  }
  	
  }



}



int op;
main(){
   do{


      cout<< "MENU" << endl;
      cout<< "1. Agregar Articulo" << endl;
      cout<< "2. Informe         " << endl;
      cout<< "3 Salir" << endl << endl;
      cout<< "Seleccionar una opcion: ";
      cin>> op;
      switch(op)
      {
      	case 1: INGRESAR_ARTICULO();
           break;

           case 2: INFORME();
         	 break;
         	 
         
            case 3: cout << "SALIENDO ... Pulse [Enter]";
            break;
            
            default:
         	         cout<< endl << "Ingrese una opcion valida";
            break;
      }//fin switch

   }while( op != 3);
}//fin main



