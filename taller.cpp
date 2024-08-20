#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menuPrincipal();
void RetirarEntero();
void RetirarValorRepetido();
void AgregarNombresDeestudiantes(); 
void ActualizarListas();
void RetirarElementoCoincidente();
void AgregarRetirar();
void llenarLista();
void llenarPrograma();
void llenarEst();
void persistencia();

/******* Punto 1 *********/ 
  struct NodoEnt{
  	int num;
  	NodoEnt *sig;
  	
  };  
NodoEnt *p_ent,*q_ent,*cab_ent,*fin_ent;
/******* Punto 3 *********/ 
struct estudiantes{
    string nom;
    estudiantes *sig; 
};  
estudiantes *cab_es, *p_es, *q_es, *fin_es;

/*********** Punto 4 ********/
 struct prog{
  	long cod;
	string programa;
  	prog *sig;
  	
  };
  
prog *p_p,*q_p,*r_p,*cab_p,*fin_p;

struct est{
  	
  	string  nom;
  	long cod;
  	string prog;
  	est *sig;
  	
  };
  est  *p_e,*q_e,*r_e,*cab_e,*fin_e;
  
  
  // Punto 5

 struct Nod_1{
  	int numero1;
  	Nod_1 *sig;
  	
  }; 
Nod_1 *p1,*q1,*fin1,*cab1;


struct Nod_2{
  	int numero2;
  	Nod_2 *sig;
  	
  };
  
Nod_2 *p2,*q2,*r2,*fin2,*cab2;


//Punto 6

struct List_1{
	
	long cod;
	List_1 *sig;
	
};
List_1 *s, *t, *u,*cab8;

struct List_2{
	
	long cod2;
	char acc;
	List_2 *sig;
	
};

List_2 *v, *w, *cab9;

int main(int argc, char** argv) {
	llenarLista();
	llenarPrograma();
    llenarEst();
    persistencia();
	bool fin =false;
	do{
	  	int op=menuPrincipal();
	  	switch(op){
	  		case 1:{
	  				    RetirarEntero();
					    break;
			       }
	  		case 2:{
	  			        RetirarValorRepetido();
						break;
			       }
	  		case 3:{
	  					AgregarNombresDeestudiantes(); 
						break;
			       }
	  		case 4:{
	  					ActualizarListas();
						break;
			       }
	  		case 5:{
	  					RetirarElementoCoincidente();
						break;
			       }
	  		case 6:{
	  					AgregarRetirar();
						break;
			       }
	  		case 7:{
	  			        fin =true;
						break;
			       }
		    default:{
		    	        cout<<"\t\t \a error ! digita una opcion correcta";
		    	        system("PAUSE");
						break;
					}				   				   				   				   			    
	  	    
	  		
		}
	}while(fin ==false);
	return 0;
}


int menuPrincipal(){
    system("cls");
    int op;
    cout<<"\t\t\t**************************************************\n";
    cout<<"\t\t\t**************************************************\n"; 
    cout<<"\t\t\t**      BIENVENIDOS A NUESTRO MENU              **\n";
    cout<<"\t\t\t**                                              **\n";
    cout<<"\t\t\t**************************************************\n";
    cout<<"\t\t\t**    1) Retirar Entero                 	     **\n";
    cout<<"\t\t\t**    2) Retirar Valor Repetido              	 **\n";
    cout<<"\t\t\t**    3) Agregar Nombres De estudiantes 	     **\n";
    cout<<"\t\t\t**    4) Actualizar Listas(listas cruzadas)	 **\n";
    cout<<"\t\t\t**    5) Retirar Elemento coincidente en listas **\n";
    cout<<"\t\t\t**    6) Agregar o Retirar               	     **\n";
    cout<<"\t\t\t**    7) Salir                          	     **\n";
	cout<<"\t\t        ********************************************\n";
	cout<<"\t\t        ********************************************\n";
    cout<<"\t\t\t\t DIGITE UNA OPCION :                ";cin>> op;
    
    return op;
 }
///\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/ 
 void llenarLista(){
   p_ent = new (NodoEnt);
   p_ent->num =20;
   p_ent->sig=NULL;
   cab_ent=p_ent;
   fin_ent=cab_ent;
   
   p_ent = new (NodoEnt);
   p_ent->num =20;
   p_ent->sig=NULL;
   fin_ent->sig =p_ent;
   fin_ent=p_ent;
   
     p_ent = new (NodoEnt);
   p_ent->num =10;
   p_ent->sig=NULL;
   fin_ent->sig =p_ent;
   fin_ent=p_ent;
   
     p_ent = new (NodoEnt);
   p_ent->num =20;
   p_ent->sig=NULL;
   fin_ent->sig =p_ent;
   fin_ent=p_ent;
   
     p_ent = new (NodoEnt);
   p_ent->num =3;
   p_ent->sig=NULL;
   fin_ent->sig =p_ent;
   fin_ent=p_ent;
   
   p_ent = new (NodoEnt);
   p_ent->num =27;
   p_ent->sig=NULL;
   fin_ent->sig =p_ent;
   fin_ent=p_ent;
   
   p_ent = new (NodoEnt);  
   p_ent->num =19;
   p_ent->sig=NULL;
   fin_ent->sig =p_ent;
   fin_ent=p_ent;
     
   p_ent = new (NodoEnt);  
   p_ent->num =22;
   p_ent->sig=NULL;
   fin_ent->sig =p_ent;
   fin_ent=p_ent;
   
   p_ent = new (NodoEnt); 
   p_ent->num =26;
   p_ent->sig=NULL;
   fin_ent->sig =p_ent;
   fin_ent=p_ent;
   
   
   p_ent = new (NodoEnt); 
   p_ent->num =28;
   p_ent->sig=NULL;
   fin_ent->sig =p_ent;
   fin_ent=p_ent;
    
 	
 }
 
 void RetirarEntero(){
    
	int numero=0;
	char seguir = 's';
	system("cls");
	while(seguir == 's'){
		
	    //mostrando
		q_ent = cab_ent;
    	while(q_ent!=NULL){
    		cout<<"\n\t\t numero : "<<q_ent->num ;
	    	q_ent=q_ent->sig ;	
		}
		cout<<"\n";
		cout<<"\n\n\t\t\t       Eliminar Nodo    ";
		cout<<"\n\t Digite el valor a Retirar : ";cin>>numero;
		if(cab_ent == NULL){
		
			cout<<"\n\t ¡ Lista vacia ! \n";
		
		}
		else{
					 p_ent = cab_ent;
			         char encontro = 'n';		
			         while(encontro == 'n' && p_ent != NULL){
				    	if(p_ent->num == numero){
					       encontro = 's';
				     	}
				     	else{
					       p_ent = p_ent->sig;
				        }
			         }
			         
			          if(encontro == 'n'){
				         cout<<"\n\t ¡El dato no esta dentro de la lista ! ";
					  }else{
					  
					          if(p_ent == cab_ent){
						         cab_ent = cab_ent->sig;
						         delete(p_ent); 
						         cout<<"\n\t ¡ Su dato se eliminó !";
					           }else{
					 	           q_ent = cab_ent;
					               while(q_ent->sig != p_ent){
						             q_ent = q_ent->sig;
					               }
					                 q_ent->sig = p_ent->sig;
					                 delete(p_ent);
						             cout<<"\n\t ¡ Su dato se eliminó !";
					           }
					
				      }
			}
	
	    cout<<"\n\t\tDESEA SEGUIR RETIRANDO [s/n] : "; cin>>seguir;     
   }
}
 //\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
void RetirarValorRepetido(){
	int numero = 0;
	char seguir = 's';
	
	system("cls");
	cout<<"\n\n\t\t !! RETIRAR REPETIDOS !!";
	
	while(seguir == 's'){
				
		if(cab_ent == NULL){
			cout<<"\n\n\t\t !! LA LISTA ESTA VACIA !! \n";
		}
		else{
			p_ent=cab_ent;
		     while(p_ent!=NULL){
		     	q_ent=p_ent->sig;
		     	while(q_ent!=NULL){
		     		if(q_ent->num ==p_ent->num ){
		     			p_ent->sig=q_ent->sig;
		     			delete(q_ent);
		     			q_ent=p_ent->sig ;
					 }else{
					 	q_ent=q_ent->sig;
					 }
				}
				 p_ent= p_ent->sig;
				 q_ent = cab_ent;
    				while(q_ent!=NULL){
    					cout<<"\n\t\t numero : "<<q_ent->num ;
	    				q_ent=q_ent->sig ;	
					}
					cout<<"\n";
				 
			 }
			 seguir='n';
			 system("PAUSE");
        }

   }
}

//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/

char consultar_dato(string ec){
		char encontro='n';
		if(cab_es!=NULL){
		    p_es=cab_es;
		    while((encontro=='n')&&(p_es!=NULL)){
		    	if(p_es->nom ==ec){
		    		encontro='s';
		    		cout<<"\n\t El Estudiante Ya esta ! \a\n ";
		    		cout<<"\n\tnombre del Estudiante: "<<p_es->nom;
					cout<<"\n";	
				}else{
				      p_es=p_es->sig;
				}
			}
		}
		return encontro;
}

void AgregarNombresDeestudiantes(){
	cout<<"\n\t****REGISTRO DE ESTUDIANTES*****\n";
    	char mas='s';
    	
    	do{
    		char resp;
    	    string ec ;
			cout<<"\n\t digite el nombre: ";
		    cin>>ec;
    		resp=consultar_dato(ec);
    		if(resp!='s'){
				p_es=new(estudiantes);
				if(p_es==NULL){
					cout<<"\t no hay memoria en Disco!";
				}else{
					//lleno el nodo
					p_es->nom=ec;
					//Balancemos el nodo a la lista !!
					p_es->sig =NULL;
					if(cab_es==NULL){
						cab_es=p_es;
						fin_es=cab_es;
					}else{
						fin_es->sig=p_es;
						fin_es =p_es;
					}
				}
			}
	    	cout<<"\t quiere usted ingresar otro Estudiante? [S/N]"; cin>>mas;
		}while(mas=='s');
	
}
//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/

 void llenarPrograma(){
	
	  p_p = new (prog);
	  p_p->cod =2020;
	  p_p->programa="ingenieria de sistemas";
	  p_p->sig =NULL;
	  cab_p=p_p;
	  fin_p=cab_p;
	  
	  p_p = new (prog);
	  p_p->cod =2021;
	  p_p->programa="ingenieria electronica";
	  p_p->sig =NULL;
	  fin_p->sig =p_p;
	  fin_p=p_p;
	
	  p_p = new (prog);
	  p_p->cod =2022;
	  p_p->programa="idiomas";
	  p_p->sig =NULL;
	  fin_p->sig =p_p;
	  fin_p=p_p;
	  
	  p_p = new (prog);
	  p_p->cod =2023;
	  p_p->programa="licenciatura";
	  p_p->sig =NULL;
	  fin_p->sig =p_p;
	  fin_p=p_p;
	
}

void llenarEst(){
 
    p_e= new (est);
    p_e->cod = 2020;
    p_e->nom ="elias";
    p_e->prog =" ";
    p_e->sig =NULL;
    cab_e=p_e;
    fin_e=cab_e;
    
    p_e= new (est);
    p_e->cod = 2021;
    p_e->nom ="kendy";
    p_e->prog =" ";
    p_e->sig =NULL;
    fin_e->sig =p_e;
    fin_e=p_e;
    
    p_e= new (est);
    p_e->cod = 2022;
    p_e->nom ="oscar";
    p_e->prog =" ";
    p_e->sig =NULL;
    fin_e->sig =p_e;
    fin_e=p_e;
	
    
    p_e= new (est);
    p_e->cod = 2023;
    p_e->nom ="leo";
    p_e->prog =" ";
    p_e->sig =NULL;
    fin_e->sig =p_e;
    fin_e=p_e;    
	
}

void verListas(){
	
	p_e = cab_e;
	
	if(cab_e == NULL){
		system("cls");
		cout<<"\n\nt\t\t LA LISTA ESTA VACIA! \a\n";
	}else{
	system("cls");
	cout<<"\n\n\t\t\t\t\t VER ESTUDIANTES ";
	cout<<"\n\n";
	while(p_e != NULL){
		
		cout<<"CODIGO: "<<p_e->cod <<"\n\t\t\t\t";
		cout<<"NOMBRE: "<<p_e->nom <<"\n\t\t\t\t";
		cout<<"PROGRAMA: "<<p_e->prog <<"\n\n\t\t\t\t";	
		p_e = p_e->sig;
	}
   }    
	
	p_p  = cab_p;
	if(cab_p == NULL){
		system("cls");
		cout<<"\n\nt\t\t LA LISTA ESTA VACIA! \a\n";
	}else{
		cout<<"\n\n\t\t\t\t\t VER PROGRAMA ";
		cout<<"\n\n";
		while(p_p != NULL){
			cout<<"CODIGO: "<<p_p->cod  <<"\n\t\t\t\t";
			cout<<"PROGRAMA: "<<p_p->programa  <<"\n\n\t\t\t\t";	
			p_p = p_p->sig;
		}
    } 

    
	  
}



void ActualizarListas(){
     	verListas();
     	long ced;
     	char seguir='s';
     	while(seguir=='s'){
     	cout<<"\n\n\t\t\t\tACTUALIZAR LISTAS\n\n\n";
     	cout<<"\t\t DIGITE EL CODIGO DEL ESTUDIANTE A BUSCAR : ";cin>>ced;
     	p_e = cab_e;
     	while(p_e != NULL){
     		if(p_e->cod == ced){
     			system("cls");
     			cout<<"\t\t\n\n\n\n\n EL ESTUDIANTE ESTA EN LA LISTA\n\n\n";
                p_p = cab_p;
				while(p_p != NULL){
					if(p_p->cod == ced){
						p_e->prog  =p_p->programa ; 
						cout<<"\n\n\t\t realizo la actualizacion\n\n";
					}
					else{
						p_p = p_p->sig;
					}
					
				} 			
     		}
     		else
     		{
     				p_e = p_e->sig;
     		}
     	}
     	
     	
     	cout<<"\t DESEA SEGUIR CALCULANDO LAS NOTAS DE LOS ESTUDIANTES [s/n] : ";cin>>seguir;
     }
	
}

void persistencia(){
   p1 = new (Nod_1);
   p1->numero1  =20;
   p1->sig=NULL;
   cab1=p1;
   fin1=cab1;
   
   p1 = new (Nod_1);
   p1->numero1 =2;
   p1->sig=NULL;
   fin1->sig =p1;
   fin1=p1;
   
   p1 = new (Nod_1);
   p1->numero1 =5;
   p1->sig=NULL;
   fin1->sig =p1;
   fin1=p1;
   
   p1 = new (Nod_1);
   p1->numero1 =4;
   p1->sig=NULL;
   fin1->sig =p1;
   fin1=p1;
   
   
   
   p2 = new (Nod_2);
   p2->numero2 =20;
   p2->sig=NULL;
   cab2=p2;
   fin2=cab2;
   
   p2 = new (Nod_2);
   p2->numero2 =2;
   p2->sig=NULL;
   fin2->sig =p2;
   fin2=p2;
   
   p2 = new (Nod_2);
   p2->numero2 =5;
   p2->sig=NULL;
   fin2->sig =p2;
   fin2=p2;
   
   p2 = new (Nod_2);
   p2->numero2 =4;
   p2->sig=NULL;
   fin2->sig =p2;
   fin2=p2;
   
    
 	
}

void RetirarElementoCoincidente(){
	    system("PAUSE");
	    p1= cab1;
	    cout<<"\n\n \t \t \t Lista #1";
	    while(p1!= NULL){
	    	cout<<"\n\t \t \tnumero: "<<p1->numero1 <<endl<<endl;
	    	p1=p1->sig ;
		}
		p2= cab2;
	    cout<<"\n\n\t \t \t Lista #2";
	    while(p2!= NULL){
	    	cout<<"\n\t \t \tnumero: "<<p2->numero2 <<endl<<endl;
	    	p2=p2->sig;
		}
     	if(cab1==NULL || cab2==NULL){
     		system("cls");
		cout<<"\n\n\n\n\n,,\n\n\n\n\n\n\n\t\t Las Listas Estan Vacias \n\a";
		}else{
			p1=cab1;
			while(p1!=NULL){
					p2=cab2;
					while(p2!=NULL){
						if(p2->numero2==p1->numero1){
						   	if(p2 == cab2){
						   	   cab2=cab2->sig ;
							   delete(p2);	
							   p2=p2->sig ;
							}else{
								r2=cab2;
								while(r2->sig !=p2){
									r2=r2->sig ;
								}
								r2->sig =p2->sig ;
								delete(p2);
								p2=r2->sig;
							}
						}else{
							p2=p2->sig ;
						}
		   			}
		   			p1=p1->sig;
			}
			
		}
        system("cls");
        cout<<"\n\n\n\n\n\n\t\t\tSE ELIMINARON CORRECTAMENTE";
        cout<<endl;
}	


void AgregarRetirar(){
	
}
