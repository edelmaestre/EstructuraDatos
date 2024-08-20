#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
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
void Persistencias_6();

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
  
  
  /*********** Punto 5 ********/

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


 /*********** Punto 6 ********/

struct list1{
	
	long num;
	list1 *sig;
	
};
list1 *pl1, *ql1, *finl1,*cabl1,*rl1;

struct list2{
	
	long num;
	char acc;
	list2 *sig;
	
};

list2 *pl2, *ql2, *finl2,*cabl2;

///\/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char** argv) {
    Beep(523,500); 
	llenarLista();
	llenarPrograma();
    llenarEst();
    persistencia();
    Persistencias_6();
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
                        Beep(784,500); 
                        Beep(523,500);
                     
    
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
    
//    Beep(587,500); 
//    Beep(659,500); 
//    Beep(698,500); 
    Beep(784,500);
    int op;
    cout<<"\n\n\n\t\t\t**************************************************\n";
    cout<<"\t\t\t**************************************************\n"; 
    cout<<"\t\t\t**      BIENVENIDOS A NUESTRO MENU              **\n";
    cout<<"\t\t\t**                                              **\n";
    cout<<"\t\t\t**************************************************\n";
    cout<<"\t\t\t**    1) Retirar Entero                         **\n";
    cout<<"\t\t\t**    2) Retirar Valor Repetido       	        **\n";
    cout<<"\t\t\t**    3) Agregar Nombres De estudiantes 	**\n";
    cout<<"\t\t\t**    4) Actualizar Listas(listas cruzadas)	**\n";
    cout<<"\t\t\t**    5) Retirar Elemento coincidente en listas **\n";
    cout<<"\t\t\t**    6) Agregar o Retirar                      **\n";
    cout<<"\t\t\t**    7) Salir                                  **\n";
	cout<<"\t\t        **************************************************\n";
	cout<<"\t\t        **************************************************\n";
    cout<<"\t\t\t\t\tDIGITE UNA OPCION : ";cin>> op;
    
    return op;
 }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
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
    		cout<<"\n\t\t______________";
    		cout<<"\n\t\t|numero : "<<q_ent->num<<"|" ;
	    	q_ent=q_ent->sig ;	
		}
		cout<<"\n";
		cout<<"\n\n\t\t\t       Eliminar Nodo    ";
		cout<<"\n\t Digite el valor a Retirar : ";cin>>numero;
		if(cab_ent == NULL){
		
			cout<<"\n\t ¡ Lista vacia ! \n\a";
		
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
				         cout<<"\n\t ¡El dato no esta dentro de la lista !\a ";
					  }else{
					  
					          if(p_ent == cab_ent){
						         cab_ent = cab_ent->sig;
						         delete(p_ent); 
						         cout<<"\n\t ¡ Su dato se elimino !";
					           }else{
					 	           q_ent = cab_ent;
					               while(q_ent->sig != p_ent){
						             q_ent = q_ent->sig;
					               }
					                 q_ent->sig = p_ent->sig;
					                 delete(p_ent);
						             cout<<"\n\t ¡ Su dato se elimino !";
					           }
					
				      }
			}
	
	    cout<<"\n\t\tDESEA SEGUIR RETIRANDO [s/n] : "; cin>>seguir;     
   }
}
 ///////////////////////////////////////////////////////////////////////////////////////////////////////////
void RetirarValorRepetido(){
	int numero = 0;
	char seguir = 's';
	
	system("cls");
	cout<<"\n\n\t\t !! RETIRAR REPETIDOS !!";
	
	while(seguir == 's'){
		
				
		if(cab_ent == NULL){
			cout<<"\n\n\t\t !! LA LISTA ESTA VACIA !! \n\a";
		}
		else{
			cout<<"\n\n\t\t !! NUMEROS EN  LISTA ORIGINAL!! \n";

				q_ent = cab_ent;
    				while(q_ent!=NULL){
    					cout<<"\n\t\t______________";
    					cout<<"\n\t\t|numero : "<<q_ent->num<<"|" ;
	    				q_ent=q_ent->sig ;	
					}
					cout<<"\n";
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
			 }
			 seguir='n';
			 
			 
        }
        cout<<"\n\n\t\t !! NUMEROS RESULTANTES EN LA   LISTA!! \n";

				q_ent = cab_ent;
    				while(q_ent!=NULL){
    					cout<<"\n\t\t______________";
    					cout<<"\n\t\t|numero : "<<q_ent->num<<"|" ;
	    				q_ent=q_ent->sig ;	
					}
		cout<<"\n\n";
		Beep(659,500);
		system("PAUSE");

   }
}

//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
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
	system("CLS");
	cout<<"\n\t****REGISTRO DE ESTUDIANTES*****\n";
    	char mas='s';
    	
    	do{
    		char resp;
    	    string ec ;
			cout<<"\n\t Digite el nombre: ";
		    cin>>ec;
    		resp=consultar_dato(ec);
    		if(resp!='s'){
				p_es=new(estudiantes);
				if(p_es==NULL){
					cout<<"\t no hay memoria en Disco!\a";
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
	    	cout<<"\t Quiere usted ingresar otro Estudiante? [S/N]"; cin>>mas;
		}while(mas=='s');
	
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
		
		cout<<"\n\t\t\t\tCODIGO: "<<p_e->cod <<"\n\t\t\t\t";
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
			cout<<"\n\t\t\t\tCODIGO: "<<p_p->cod  <<"\n\t\t\t\t";
			cout<<"PROGRAMA: "<<p_p->programa  <<"\n\n\t\t\t\t";	
			p_p = p_p->sig;
		}
    } 

    
	  
}



void ActualizarListas(){
     	verListas();
     	int k=0;
     	long ced;
     	char seguir='s';
     	while(seguir=='s'){
     	cout<<"\n\n\t\t\t\tACTUALIZAR LISTAS\n\n\n";
     	cout<<"\t\t DIGITE EL CODIGO DEL ESTUDIANTE A BUSCAR : ";cin>>ced;
     	p_e = cab_e;
     	while(p_e != NULL){
     		if(p_e->cod == ced){
     			k=1;
                p_p = cab_p;
				while(p_p != NULL){
					if(p_p->cod == ced){
						p_e->prog  =p_p->programa ; 
						k=2;
					}
						p_p = p_p->sig;
					
				} 			
     		}
     		p_e = p_e->sig;
     	}
     	if(k==0){
     		cout<<"\n\n\t\t no se encuentra el estudiante :(\n\n";
		 }else if(k==1){
		 	cout<<"\n\n\t\t el estudiante esta en la lista pero no hay programa asignado :/ \n\n";
		 }else{
		 	cout<<"\n\n\t\t realizo la actualizacion :)\n\n";
		 }
     	
     	
     	cout<<"\t DESEA SEGUIR ACTUALIZANDO [s/n] : ";cin>>seguir;
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
   
   p2 = new (Nod_2);
   p2->numero2 =345;
   p2->sig=NULL;
   fin2->sig =p2;
   fin2=p2; 

   p2 = new (Nod_2);
   p2->numero2 =354;
   p2->sig=NULL;
   fin2->sig =p2;
   fin2=p2;   

   p2 = new (Nod_2);
   p2->numero2 =469;
   p2->sig=NULL;
   fin2->sig =p2;
   fin2=p2;
}

void RetirarElementoCoincidente(){
	    system("cls");
	    p1= cab1;
	    cout<<"\n\n\t\t Retirar Elemento Coincidente \n";
	    cout<<"\n\n \t \t \t Lista #1";
	    while(p1!= NULL){
	    	cout<<"\n\t\t\t\t\t numero: "<<p1->numero1 <<endl<<endl;
	    	p1=p1->sig ;
		}
		p2= cab2;
	    cout<<"\n\n\t\t\t Lista #2";
	    while(p2!= NULL){
	    	cout<<"\n\t\t\t\t \tnumero: "<<p2->numero2 <<endl<<endl;
	    	p2=p2->sig;
		}
     	if(cab1==NULL || cab2==NULL){
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t Las Listas Estan Vacias \n\a";
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
        cout<<"\n\n\n\n\n\n\t\t\tSE ELIMINARON CORRECTAMENTE";
        cout<<"\n\n\n\n\n\n\t\t\t LISTAS RESUSLTANTES  ";

        cout<<endl;
        p1= cab1;
        
        cout<<"\n\n \t \t \t Lista #1";
        if(cab1==NULL){
	    			cout<<"\n\n\t\t Las Lista 2 Esta Vacia \n\a";

		}else{
	    	while(p1!= NULL){
	    		cout<<"\n\n\t\t\t\t\tnumero: "<<p1->numero1 <<endl<<endl;
	    		p1=p1->sig ;
			}
	    }
	    
		p2= cab2;
	    cout<<"\n\n\t \t \t Lista #2\n";
	    if(cab2==NULL){
	    			cout<<"\n\n\t\t Las Lista 2 Esta Vacia \n\a";

		}else{
		
	   	    while(p2!= NULL){
	    		cout<<"\n\t \t \tnumero: "<<p2->numero2<<endl;
	    		p2=p2->sig;
			}
	   }
	   Beep(659,500);
        system("PAUSE");
}	
//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/
void Persistencias_6(){
	pl1= new (list1);
	pl1->num = 12345;
	pl1->sig = NULL;
	cabl1=pl1;
	finl1=cabl1;

	pl1= new (list1);
	pl1->num = 202020;
	pl1->sig =NULL;
	finl1->sig =pl1;
	finl1=pl1;

	pl1= new (list1);
	pl1->num = 202021;
	pl1->sig =NULL;
	finl1->sig =pl1;
	finl1=pl1;

	pl1= new (list1);
	pl1->num = 202022;
	pl1->sig =NULL;
	finl1->sig =pl1;
	finl1=pl1;

	pl1= new (list1);
	pl1->num = 202023;
	pl1->sig =NULL;
	finl1->sig =pl1;
	finl1=pl1;

	pl1= new (list1);
	pl1->num = 202024;
	pl1->sig =NULL;
	finl1->sig =pl1;
	finl1=pl1;
	
	pl1= new (list1);
	pl1->num = 202025;
	pl1->sig =NULL;
	finl1->sig =pl1;
	finl1=pl1;	
	
	


	pl2= new (list2);
	pl2->num = 12345;
	pl2->acc ='r';
	pl2->sig =NULL;
	cabl2=pl2;
	finl2=cabl2;

	pl2= new (list2);
	pl2->num = 202020;
	pl2->acc ='r';
	pl2->sig =NULL;
	finl2->sig =pl2;
	finl2=pl2;

	pl2= new (list2);
	pl2->num = 202021;
	pl2->acc ='r';
	pl2->sig =NULL;
	finl2->sig =pl2;
	finl2=pl2;

	pl2= new (list2);
	pl2->num = 202022;
	pl2->acc ='a';
	pl2->sig =NULL;
	finl2->sig =pl2;
	finl2=pl2;
	
	pl2= new (list2);
	pl2->num = 202023;
	pl2->acc ='a';
	pl2->sig =NULL;
	finl2->sig =pl2;
	finl2=pl2;

	pl2= new (list2);
	pl2->num = 202024;
	pl2->acc ='a';
	pl2->sig =NULL;
	finl2->sig =pl2;
	finl2=pl2;

	pl2= new (list2);
	pl2->num = 202025;
	pl2->acc ='r';
	pl2->sig =NULL;
	finl2->sig =pl2;
	finl2=pl2;
	
}

void eliminarcruce(){
	if((pl1 == cabl1)&(cabl1 ->sig == NULL)){
               	//borrar el unico
                	cabl1 = NULL;
                  delete(pl1);
               }else{
               	if(pl1 == cabl1){//2
                  	//borrar el primero
                     cabl1 = cabl1 -> sig;
                     delete(pl1);
                  }else{
                  	if(pl1->sig == NULL){//1
                     	//borrar el ultimo
                        rl1 = cabl1;
                        while(rl1 ->sig != finl1){
                        	rl1 = rl1 ->sig;
                        }//fin while
                        rl1 ->sig = NULL;
                        delete(finl1);
                        finl1 = rl1;
                     }else{
                     	//borrar del medio
                        rl1 = cabl1;
                        while(rl1 -> sig != pl1){
                        	rl1 = rl1 ->sig;
                        }//fin while
									rl1->sig = pl1 ->sig;
                           delete(pl1);
                     }//1
                  }//2
               }//fin if//3

}//fin eliminar-cruce

void agregarcruce(){
if(pl2->acc == 'a'){
	      long valor;
          valor = pl2->num;
          pl1 = new(list1);
      				if( pl1 == NULL){
      					cout<<"No hay memoria disponible\a" << endl;
      				}else{
      					pl1->num = valor;
         				pl1->sig = NULL;
                     if( cabl1 == NULL){
         					cabl1 = pl1;
         					finl1 = cabl1;
         				}else{
         					finl1->sig = pl1;
           					finl1 = pl1;
        					}//fin if
               	}//fin if
         }//fin if
}//fin agregarcruce

void AgregarRetirar(){
	system("cls");
   cout<<"\n \n \t\t AGREGAR O RETIRAR DE ACUERDO A LA ACCION \n\n\n ";
   cout<<"\n \n \t\t LISTA NUMERO UNO \n\n ";
   ql1=cabl1;
   while(ql1!=NULL){
   	   cout<<"\t\t ______________\n";
   	   cout<<"\t\t|NUMERO: "<<ql1->num<<"|\n";
   	   ql1=ql1->sig ;
   }
   
   cout<<"\n\n";
   Beep(659,500);
   system("PAUSE");
   
   cout<<"\n \n \t\t LISTA NUMERO DOS \n\n ";
   ql2=cabl2;
   while(ql2!=NULL){
   	   cout<<"\t\t _______________\n";
   	   cout<<"\t\t|NUMERO: "<<ql2->num<<"|" <<endl;
   	   cout<<"\t\t|ACCION: "<<ql2->acc<<"     |"  <<endl;
   	   ql2=ql2->sig ;
   }
   system("PAUSE");
   char encontro;
   if((cabl1 == NULL) || (cabl2 == NULL)){
   	cout<<"No hay nada que hacer (Y)\a";
   }else{
   	pl2 = cabl2;
      while(pl2 != NULL){
			agregarcruce();
      	pl1 = cabl1;
      	encontro = 'n';
         	while((pl1 != NULL) & (encontro == 'n')){
            	if(pl1 -> num == pl2 -> num){
               	encontro = 's';
               }else{
               	pl1 = pl1 -> sig;
               }//fin if
            }//fin while

            if(encontro == 's'){
            	if(pl2->acc == 'r'){
               	eliminarcruce();
            	}//fin if-accion
            }//fin if encontro
            pl2 = pl2 -> sig;
      }//fin while
   }//fin if
   cout<<"\n \n \t\t LISTA NUMERO UNO RESULTANTE  \n\n ";
   ql1=cabl1;
   while(ql1!=NULL){
   	   cout<<"\t\t _______________\n";
   	   cout<<"\t\t|NUMERO: "<<ql1->num<<"|" <<endl;
   	   ql1=ql1->sig ;
   }
   Beep(659,500);
   cout<<"\t\t\t Proceso Realizado.....!!\n\n";
   system("PAUSE");
}//fin cruzar


