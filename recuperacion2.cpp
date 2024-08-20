#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Insertar();
void Informe();
void Eliminar();

using namespace std;

struct Nodo{
	int numero;
	Nodo *sig;
	
}*p, *q,*r, *inicio, *fin;

double promedio=0;
int cont=0;
int sum;

int main(int argc, char** argv) {
	int op;
do{
	system("cls");
	cout<<"\t ***Numeros***";
	
cout<<"\n 1. Insertar numero ";
cout<<"\n 2. Informe";
cout<<"\n 3. Eliminar";
cout<<"\n 4. Salir";

cout<<"\n\n Escriba una opcion--> ";
cin>>op;
 
 switch(op){
 	case 1:Insertar();
 		   system("pause");
	       break;
	       
 	case 2:Informe();
 		   system("pause");
	 	   break;
	 	   
   	case 3:Eliminar();
 		   system("pause");
	 	   break;
	 
	default: cout<<"Opcion no valida";
	 
 }
}while( op!=4 );
	return 0;
}

void Insertar(){
	system("cls");
	p = new Nodo;
	if(p == NULL){
		cout<<"No hay memoria";
	}else{
		do{
				cout<<"Escriba un Numero (Par) \n";
				cin>>p->numero;
		}while(p->numero%2!=0);

		p->sig=NULL;
		
		if(inicio==NULL){
			inicio=p;
			fin=p;
			cont=cont+1;
			promedio=p->numero/cont;
			
		}else{
			q=inicio;
			while(q!=NULL){
				sum=sum+q->numero;
				q=q->sig;
			}
			cont=cont+1;
			promedio=sum/cont;
				
			if(promedio < p->numero){
				p->sig=inicio;
				inicio=p;
			
			}else{
				fin->sig=p;
				fin=p;
			
			}
			
		}
		
	}
}

void Informe(){
  cout<<" .: Informe de Numeros:. \n\n";
  if (inicio == NULL){
  	
  	cout<<" No hay Numeros \n";
  	
  	
  }else{
  	
  	cout<<"Lista de Numeros \n";
  	q = inicio;
  	
  	while (q != NULL){
  		
  		cout<<"\n Numero -> ";
  		cout<<(q->numero);
  		cout<<"\n";
  		q = q->sig;
  		
	  }
	  
	  cout<<"\n La cantidad de datos son: ";
	  cout<<cont;
	  cout<<"\n Su promedio fue: ";
	  cout<<promedio;
  }
}

void Eliminar(){
	system("cls");
	int dato;
	char encontro='n';
		if(inicio==NULL){
			cout<<"No hay lista";
		}else{		
			cout<<"Digite el numero a eliminar--> ";
			cin>>dato;
			q=inicio;
			while((q!=NULL)and(encontro=='n')){
				if(q->numero==dato){
					encontro='s';
				}else{
					q=q->sig;
				}
			}
			
			if(encontro=='s'){
				if(inicio->numero==dato){
					inicio=inicio->sig;
					delete(q);
					cout<<"Se elimino en la cabeza";
				}else{
						if(fin->numero==dato){
							r=inicio;
							while(r->sig!=fin){
								r=r->sig;
							}
							fin=r;
							delete(q);
							cout<<"lo elimino al final";
						}else{
							r=inicio;
							while(r->sig!=q){
								r=r->sig;
							}
							r->sig=q->sig;
							delete(q);
							cout<<"lo elimino en medio de";
						}
				}
				
			
			}else{
				cout<<"No se encontro en lista";
			}
		
		
			
	}
}

