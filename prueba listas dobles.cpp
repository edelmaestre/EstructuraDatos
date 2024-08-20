 #include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


struct nodo{
	long ced;
	char nomb[40];
	int valhora;
	nodo *sig;
	nodo *ant;
};
nodo *p, *q, *fin, *cab;

void registrar();
void resist_sin_dupli();
void informe();
void Actualizar();
void retirar();



int main(){
registrar();
resist_sin_dupli();
informe();
Actualizar();
retirar();
return 0;
}
 
void registrar(){
	
	
   char seguir ='s';
   while(seguir=='s'){
   	//pido un nodo
   	system("cls");
   	p=new (nodo);
   	
   	if(p==NULL){
   		cout<<("NO hay memoria");
	   }else{
	   	//llenamos el nodo
	   	cout<<("Introduzca documento de identidad: ");
	   	cin>>(p->ced);
	   	cout<<("Introduzca nombre: ");
	   	cin>>(p->nombre);
	    cout<<("Introduzca valor por hora ");
	   	cin>>(p->valhora);
		   
		   //Balanceamos el nodo
		   p->ant=NULL;
		   p->sig=NULL;
		   
		   //es el primer nodo de la lista?
		   if(cab==NULL){
		   	cab=p;
		   	fin=cab;
		   }else{
		   	
		   	fin->sig=p;
		   	p->ant=fin;
		   	fin=p
			   q=cab;
		   }
	   }
	   cout<<("desea agregar otro paciente a la lista? [s/n] ");
	   cin>>seguir;
   }
}

void resist_sin_dupli();{
	
	char seguir='s';
	char dato[20];
	
	
	while(seguir=='s'){
		cout<<("Cedula delempleado?");
		cin>>dato;
		
		
		if (cab!=NULL){
		
		
		char encontro='n';
		
		p=cab;
		
		while((encontro=='n')and(p!=NULL)){
			if(p->ced==dato){
				encontro='s';
			}else{
				p=p->sig;
			}
		}
		if(encontro=='s'){
			cout<<("Error! ya existe en nomina" );
		}else{
			p=new (nodo);
   	
   	if(p==NULL){
   		cout<<("NO hay memoria");
	   }else{
	   	//llenamos el nodo
	   	cout<<("Introduzca documento de identidad: ");
	   	cin>>(p->ced);
	   	cout<<("Introduzca nombre: ");
	   	cin>>(p->nombre);
	    cout<<("Introduzca valor por hora ");
	   	cin>>(p->valhora);
		   
		   //Balanceamos el nodo
		   p->ant=NULL;
		   p->sig=NULL;
		   
		   //es el primer nodo de la lista?
		   if(cab==NULL){
		   	cab=p;
		   	fin=cab;
		   }else{
		   	
		   	fin->sig=p;
		   	p->ant=fin;
		   	fin=p
			   q=cab;
		   }
	   }
		}
	
	}
		cout<<"Desea consultar Otro dato? [S/N] "); 
		cout<<Seguir;
	}
}
 
void informe(){
	
if(cab==NULL){
		cout<<("NO hay empleados");
	
	
}else{
	
	p=cab;
	
		while(p!=NULL){
			cout<<("la cedula es: ");
			cout<<(p->ced);
				cout<<("el nombre es: ");
				cout<<(p->nomb);
					cout<<("el valor por hora es");
					p=p->sig
		}
		
	}
}
	

void Actualizar(){
	
	char seguir='s';
	char dato[20];
	
	
	while(seguir=='s'){
		cout<<("Cual es el identificador a modificar?");
		cin>>dato;
		char encontro='n';
		
		p=cab;
		int cont=0;
		while(p!=NULL){
			cont=cont+1;
			if(p->ident==dato){
				encontro='s';
				cout<<("Digite el nuevo diagnostico");
				cin>>p->diag;
				cout>>("Digite el nuevo estrato");
				cin>>p->est;
				
				if(p->est<=2){
	   		p->tarifa=1000;
		   }else{
		   	if(p->est==3){
		   		p->tarifa=1500;
			   }else{
			   	p->tarifa=10000;
			   }
		   }
				
			}else{
				p=p->sig;
			}
		}
		
		if(encontro=='n'){
			cout<<("no lo encontro" );
		}
		cout<<"Desea modificar Otro dato? [S/N] "); 
		cout<<Seguir;
	}
}

void retirar(){
	 char seguir='s';
	 char dato[20];
	 
	 while(seguir=='s'){
	 	cout<<("Escriba la cedula del paciente cuya hhistoria va a retirar");
	 	cin>>dato;
	 	
	 	if(cab==NULL){
	 		cout<<("La lista esta vacia");
		 }else{
		 	p=cab;
		 	encontro='n';
		 	while((encontro=='n') && (p!=NULL)){
		 		if(p->ident==dato){
		 			encontro='s';
				 }else{
				 	p=p->sig;
				 }
			 }
			 
			 if(encontro='n'){
			 	cout<<("el dato no esta en la lista");
			 }else{
			 	//Esta en elultimo nodo?
			 	if(p->sig=NULL){  //estonces si esta en el ultimo nodo
			 	   //entonces ubicamos otro apuntador antes que p
			 	   q=cab;
			 	   
			 	   
					//ya q esta apuntando antes del nodo p, entonces desengancho el nodo del cual apunta p
					q->sig=p->sig;
					//y ahora libero el nodo del cual apunta p
					delete(p);
				 }else{
				 	//esta en el primer nodo?
				 	if(p==cab){ //entonces si esta en el primer nodo
				 	cab=cab->sig
				 	//y ahora libero el nodoal cual apunta p
				 	delete(p);
					 }else{
					 	//está en un nodo intermedio cualquiera
					 	//entonces ubicamos otro apuntador antes que p
					 	 
						 
						 //ya q esta apuntando un dodo antes de p, entonces
						 //desengancho el nodo del cual apunta p
						 q->sig=p->sig;
						 //y ahora libero el nodo al cual apunta p
						 delete(p);
					 }
				 }
			 }
		 }
		 cout<<("Desea borrar otro valor?");
		 cin>>seguir;
	 }
}







