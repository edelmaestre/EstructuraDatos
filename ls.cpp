#include <iostream>
#include <stdio.h>
#include <stdlib.h>
//listas simples
void Insertar();
void Informe();
void Eliminar();

using namespace std;

struct Nodo{
	int id;
	char persona[20];
	Nodo *sig;
	
}*principal, *aux1,*aux2, *inicio, *fin;

int main(){
int op;
do{
	system("cls");
	cout<<"\t .:Menu:.";
	
cout<<"\n 1. Insertar Ascendentemente ";
cout<<"\n 2. Informe";
cout<<"\n 3. Eliminar";
cout<<"\n 4. Salir";

cout<<"\n\n Escriba una opcion: ";
cin>>op;
 
 switch(op){
 	case 1:Insertar();
 		   system("pause");
	       break;
	       
 	case 2:Informe();
 		   system("pause");
	 	   break;
	 	   
   	case 3:Eliminar();;
 		   system("pause");
	 	   break;
	 
	default: cout<<"Opcion no valida";
	 
 }
}while( op<4 and op>0 );
}

void Insertar(){
	system("cls");
	principal = new Nodo;
	if(principal == NULL){
		cout<<"No hay memoria";
	}else{
		cout<<"Escriba un nombre: ";
		cin>>principal->persona;
		cout<<"\n Escriba id: ";
		cin>>principal->id;
		
		principal->sig=NULL;
	}
	
	if(inicio==NULL){
		inicio=principal;
		fin=principal;
	}else{
		if(inicio->id >= principal->id){
			principal->sig=inicio;
			inicio=principal;
		}else{
			if(fin->id < principal->id){
				fin->sig=principal;
				fin=principal;
			}else{
				aux1=inicio;
				while(aux1->sig != fin){
					aux1= aux1->sig;
				}
				principal->sig=aux1->sig;
				aux1->sig=principal;
			}
		}
	
	}
}

void Informe(){
	system("cls");
	cout<<".:Informe:.\n";
	aux1=inicio;
	while(aux1!=NULL){
		cout<<aux1->persona;
		cout<<aux1->id;
		cout<<"\n";
	  aux1=aux1->sig;	
	}
	 
}

void Eliminar(){
	system("cls");
	int dato;
	char encontro='n';
		if(inicio==NULL){
			cout<<"No hay lista";
		}else{
		
			cout<<"Digite la id de la persona eliminar";
			cin>>dato;
			aux1=inicio;
			while((aux1->sig!=NULL)and(encontro=='n')){
				if(aux1->id==dato){
					encontro='s';
				}else{
					aux1=aux1->sig;
				}
			}
			
			if(encontro=='n'){
				cout<<"El elemento no esta";
			}else{
				if(aux1==inicio){
					inicio=inicio->sig;
					delete(aux1);
					cout<<"se elimino";
				}else{
					aux2=inicio;
					while(aux2->sig!=aux1){
						aux2=aux2->sig;
					}
					aux2->sig=aux1->sig;
					delete(aux1);
					cout<<"se elimino";
				}
			}
			
	}
}
