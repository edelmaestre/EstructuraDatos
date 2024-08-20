 #include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


struct nodo{
	long ident;
	char nombre[40];
	int est;
	float tarifa;
	char diag[120];
	nodo *sig;
};

void registrar();
void consultar1();
void consultar2();
void Actualizar();
void retirar();
void Informe();

nodo *p, *q, *r, *cab;

int main(){
	
		int op = 0;

	do{
		
		system("cls");	
		cout<<"-------------------------------------------------------------------------------------------\n\n";
			cout<<"\t\t\t\t  Listas Enlazadas Simples  \n \n";
		cout<<"-------------------------------------------------------------------------------------------\n\n";
	    cout<<" [1]  Resgistrar Pacientes\n\n";
		cout<<" [2]  Consulta 1 \n\n";
		cout<<" [3]  Consulta 2 \n\n";
		cout<<" [4]  Actualizar \n\n";
		cout<<" [5]  Eliminar \n\n";
		cout<<" [6]  Informe \n\n";
		cout<<" [7] Salir \n\n";
		cout<<"-------------------------------------------------------------------------------------------\n\n";
		cout<<"---\t DIGITE UNA OPCION : ";
		cin>>op;  
		cout<<"\n\n-------------------------------------------------------------------------------------------\n\n";
		
	
		switch(op){
			
			case 1:
		        registrar();
		     	system("pause");	
				break; 
			case 2:
                
				consultar1();
				cout<<endl<<endl<<endl;
				system("pause"); 
			    break;  
			case 3: 
		
				consultar2();
				system("pause"); 		
			    break;
			    
			case 4: 
			    
				Actualizar();
			 	system("pause"); 	
			    break; 
			   
			case 5:
			   
				retirar();
				system("pause");
				cout<<endl<<endl<<endl; 
				break;
				
     		case 6:
			    Informe();
			    system("pause");
				cout<<endl<<endl<<endl; 
				break;
				
			  
			  
		}
    }while(op != 7);   

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
	   	cin>>(p->ident);
	   	cout<<("Introduzca nombre: ");
	   	cin>>(p->nombre);
	    cout<<("Introduzca estrato(numerio de 0 a 6): ");
	   	cin>>(p->est);
	   	cout<<("Introduzca Diagnostico: ");
	   	cin>>(p->diag);
	   	
	   	//Calculo tarifa
	   	if(p->est<=2){
	   		p->tarifa=1000;
		   }else{
		   	if(p->est==3){
		   		p->tarifa=1500;
			   }else{
			   	p->tarifa=10000;
			   }
		   }
		   
		   //Balanceamos el nodo
		   p->sig=NULL;
		   
		   //es el primer nodo de la lista?
		   if(cab==NULL){
		   	cab=p;
		   }else{
		   	//recorremos la lista desde la cabeza hasta el ultimo nodo
		   	//para añadir al final el nuevo alumno a la lista
		   	q=cab;
		   	while(q->sig!=NULL){
		   		q=q->sig;
			   }
			   //ahora el apuntador q apunta al ultimo nodo de la lista
			   //entonces añado el nuevo nodo despues del ultimo
			   q->sig=p;
		   }
	   }
	   cout<<("desea agregar otro paciente a la lista? [s/n] ");
	   cin>>seguir;
   }
}

void Informe(){
	
	if(cab==NULL){
		cout<<"No hay lista";
		
	}else{
	
     	p=cab;
		int cont=0;
		while(p!=NULL){
		cout<<("\n Nombre paciente: ");
		cout<<p->nombre;
		cout<<("\n Ident paciente: ");
		cout<<p->ident;
		cout<<("\n Estrato paciente: ");
		cout<<p->est;
		cout<<("\n Diagnostico paciente: ");
		cout<<(p->diag);
		cout<<("\n Tarifa paciente: ");
		cout<<(p->tarifa);		
			
			p=p->sig;
		}
	}
}

void consultar1(){
	
	if(cab==NULL){
		cout<<("No hay lista");
	}else{
	
	
	
	char seguir='s';
	long dato;
	

	
	while(seguir=='s'){
	    		cout<<("Cual es la identificacion del paciente a consultar?");
		cin>>dato;
	
		char encontro='n';
		
		p=cab;
		int cont=0;
		while((encontro=='n')and(p!=NULL)){
			cont=cont+1;
			if(p->ident==dato){
				encontro='s';
			}else{
				p=p->sig;
			}
		}
		
		if(encontro=='s'){
			cout<<("Encontrado en la posicion: " );
			cout<<cont;
			cout<<("\n Nombre paciente: ");
			cout<<p->nombre;
			cout<<("\n Ident paciente: ");
			cout<<p->ident;
			cout<<("\n Estrato paciente: ");
			cout<<p->est;
			cout<<("\n Diagnostico paciente: ");
			cout<<(p->diag);
			cout<<("\n Tarifa paciente: ");
			cout<<(p->tarifa);
			
		}else{
			cout<<("El paciente consultado no está en la lista");
		}
		cout<<"Desea consultar Otro dato? [S/N] "; 
		cin>>seguir;
	}
}
}
 
void consultar2(){
	
	char seguir='s';
	long dato;
	
	if(cab==NULL){
		cout<<"No hay lista";
	}else{
	
	
	while(seguir=='s'){
		cout<<("Cual es la identificacion del paciente a consultar?");
		cin>>dato;
		char encontro='n';
		
		p=cab;
		int cont=0;
		while(p!=NULL){
			cont=cont+1;
			if(p->ident==dato){
				encontro='s';
				cout<<("encontrado paciente en la posicion: ");
				cout<<cont;
				cout<<("\n");
			cout<<("Encontrado en la posicion: " );
			cout<<cont;
			cout<<("\n Nombre paciente: ");
			cout<<p->nombre;
			cout<<("\n Ident paciente: ");
			cout<<p->ident;
			cout<<("\n Estrato paciente: ");
			cout<<p->est;
			cout<<("\n Diagnostico paciente: ");
			cout<<(p->diag);
			cout<<("\n Tarifa paciente: ");
			cout<<(p->tarifa);
			}
			p=p->sig;
		}
		
		if(encontro=='n'){
			cout<<("lo consulatdo no esta en lista" );
		}
		cout<<"Desea consultar Otro dato? [S/N] "; 
		cin>>seguir;
	}
}
	
}	

void Actualizar(){
	
	
	long dato;
	
	if(cab==NULL){
		cout<<"No hay lista";
	}else{
	
	
	p=cab;
	
		  while((p!=NULL)){
		
			
			
		
			int cont=0;
		
				
					cout<<("Cual es el codigo del paciente a modificar?");
			cin>>dato;
			char encontro='n';
				
				cont=cont+1;
				if(p->ident==dato){
					encontro='s';
					cout<<("Digite el nuevo diagnostico");
					cin>>p->diag;
					cout<<("Digite el nuevo estrato");
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
				
			      	p=p->sig;
			    }
			
					if(encontro=='n'){
						cout<<("no lo encontro" );
					}
			
		    
		    
		   
	       }

       
    }
}

void retirar(){
	 char seguir='s';
	 long dato;
	 char encontro='n';
	 
	 while(seguir=='s'){
	 	cout<<("Escriba la cedula del paciente cuya historia va a retirar");
	 	cin>>dato;
	 	
	 	if(cab==NULL){
	 		cout<<("La lista esta vacia");
		 }else{
		 	p=cab;
		 	encontro='n';
		 	while((encontro=='n') and (p!=NULL)){
		 		if(p->ident==dato){
		 			encontro='s';
				 }else{
				 	p=p->sig;
				 }
			 }
			 
			 if(encontro=='n'){
			 	cout<<("el dato no esta en la lista");
			 }else{
			 	//Esta en elultimo nodo?
			 	if(p->sig=NULL){  //estonces si esta en el ultimo nodo
			 	   //entonces ubicamos otro apuntador antes que p
			 	   q=cab;
			 	   while(q->sig != p){
			 	   	q=q->sig;
					}
			 	   
			 	   
					//ya q esta apuntando antes del nodo p, entonces desengancho el nodo del cual apunta p
					q->sig=p->sig;
					//y ahora libero el nodo del cual apunta p
					delete(p);
					cout<<("Paciente elimidado");
				 }else{
				 	//esta en el primer nodo?
				 	if(p==cab){ //entonces si esta en el primer nodo
				 	cab=cab->sig;
				 	//y ahora libero el nodoal cual apunta p
				 	delete(p);
				 	cout<<("Paciente elimidado");
					 }else{
					 	//está en un nodo intermedio cualquiera
					 	//entonces ubicamos otro apuntador antes que p
					 	 
						 
						 //ya q esta apuntando un dodo antes de p, entonces
						 
						 q=cab;
					 	   while(q->sig != p){
					 	   	   q=q->sig;
							}
						 
						 //desengancho el nodo del cual apunta p
						 q->sig=p->sig;
						 //y ahora libero el nodo al cual apunta p
						 delete(p);
						 cout<<("Paciente elimidado");
					 }
				 }
			 }
		 }
		 cout<<("Desea borrar otro valor?");
		 cin>>seguir;
	 }
}







