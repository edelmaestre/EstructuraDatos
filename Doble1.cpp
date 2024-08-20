#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Plata{
	char contacto[20];
	float saldo;
	Plata *ant;
	Plata *sig;
	
};
Plata *cab, *p, *q, *fin;

void Registrar_Cuenta();
void informe();
void registro ordenado();

int main(int argc, char** argv) {

cout<<"hola";
	Registrar_Cuenta();
    informe();
    registro ordenado();
	return 0;
}

void Registrar_Cuenta(){

	char res='s';
 do{
	
	p= new(Plata);

	if (p== NULL){
		cout<<"\tNo hay memoria en Disco \a!!";
	}else{

		   cout<<"Nombre Contacto: "; cin>> p->contacto;
		   cout <<"Saldo Actual: "; cin>> p->saldo;
	  	//system("PAUSE");
	       p->ant = NULL; p->sig = NULL;
	  
	    //conectar el nodo a la lista...
	       if (cab==NULL){
	       	cab=p;
	       	fin=p;
		   }else{
		     
		     fin->sig =p;
		     p->ant = fin;
		      fin=p;
           }
    }
       cout<<"conecta otro? [S/N]: "; cin>>res;
 }while(res=='s');
}
 
 void informe(){
    if(cab==NULL){
       cout<<"No hay cuentas registradas";
    } else{
	   p=cab;
		   while(p!=NULL){
		   	cout<<"Contacto"<<p->contacto<<"\n";
			cout<< "Cuenta"<<p->saldo<<"\n";
		   	p=p->sig;
	   }
	}
	}    
	
void registro ordenado(){
	while(res=='s'){
		p=new(Plata);
		    if(p==NULL){
		    	cout<<"No hay memoria en disco";
			}else{
				
			}
			
	}
}	
	

