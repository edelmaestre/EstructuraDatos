# include <iostream>
# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <windows.h>
#include <string.h>


using namespace std;
  
  
     void llenarPuntero();    
     void verPuntero();       
     void retirarPuntero(); 
	   
     void RetirarRepetidos();
     
     void AgregarEstudiantes();
     void VerEtudiantes();
     void ActualizarEstudiantes();

     void llenarNodo();
     void llenarNodo2();
     void verNodo();
     void cruzarLista();

    void llenarlista1();
    void llenarlista2();
    void verlista();
    void verlista1();
    void cruzar();
    
    void LlenarCabe1();
    void LlenarCabe2();
    void VerCabe1();
    void VerCabe2();
    void Agregar_Retitrar();
  
    
// Punto 1
  struct Nod_1{
  	int num;
  	Nod_1 *sig;
  	
  };  
Nod_1 *p,*q,*r,*cab;

// Punto 4
 struct Nod_4{
  	long cod;
  	float n1;
  	float n2;
  	float n3;
  	float def;
  	Nod_4 *sig;
  	
  };
  
Nod_4 *a,*b,*c,*cab2;

struct Nod_2{
  	
  	char Nombre[70];
  	long cod2;
  	float def;
  	Nod_2 *sig;
  	
  };
  Nod_2 *d,*e,*f,*cab3;
  
  // Punto 5

 struct Nod_3{
  	
  	
  	int numero;
  	Nod_3 *sig;
  	
  };
  
Nod_3 *g,*h,*i, *fin,*cab4;


struct No_4{
  	
  	
  	int numero2;
  	No_4 *sig;
  	
  };
  
No_4 *j,*k,*l,*cab5;

// punto 2

struct Nod_5{
  	char nom[20];
  	Nod_5 *sig;
  	
  };  
Nod_5 *m,*n,*o,*cab1;

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

void Agregar_Datos_L1(long cod){
	
	s = new List_1;
	
   s->cod = cod;
   s->sig = NULL;
   
   if(cab8 == NULL){
   	   cab8 = s;
   }
   else
   {
   	s = cab8;
   	while(s->sig != NULL){
   		s = s->sig;
   	}
   	s->sig = s;
 
   }
   
}

void Agregar_Datos_L2(long cod2, char accs){
	
	v = new List_2;
	
   v->cod2 = cod2;
   v->acc = accs;
   v->sig = NULL;
   
   if(cab9 == NULL){
   	   cab9 = v;
   }
   else
   {
   	w = cab9;
   	while(w->sig != NULL){
   		w = w->sig;
   	}
   	w->sig = v;
   }
 
	
}

void VerLista1(){
		s = cab8;
	
	if(cab8 == NULL){
	   cout<<"La lista esta vacia";
	}else{
	
	system("cls");
	cout<<"\n\t Lista 1";

	while(s != NULL){
		cout<<"\n Codigo : "<<s->cod;
		s = s->sig;
	}
	 getch();
  }
}
void VerLista2(){
	
	v = cab9;
	
	if(cab9 == NULL){
	   cout<<"La lista esta vacia";
	}else{
	
		system("cls");
	cout<<"\t Lista 2\n";
	while(v != NULL){
		cout<<"Codigo : "<<v->cod2;
		cout<<"\nAccion : "<<v->acc<<"\n";
		cout<<"  ";
		v = v->sig;
	}
     getch();
  }
}

void Agregar_o_Retirar(long cod){
	
	int i = 1;
	int cont = 0;
	
	while(v != NULL){
		if(v->cod2 == cod){
			cout<<"hola";
			cout<<"\t\n El Código ya esta en la lista\a\n"<<endl;
			cont = 1;
			if(v->acc == 'A'){
			    cout<<"hola";
				s = new List_1;
				s->cod = v->cod2;
				s->sig = NULL;
				if(cab8 == NULL){
					cab8 = s;
				}
				else
				{
					s = cab8;
					while(s->sig != NULL){
						t = s->sig;
					}
					s->sig = s;
				}
				cout<<"\t\n Se agregó correctamente \n\a";
			}
			else if (v->acc == 'R'){	
			  cout<<"hola";
				   s = cab8;
				      if(cab8 != NULL){
				   	
				   	    while(s != NULL){
				   	  	   
				   	  	   if(s->cod == cod){
				   	  	         if(s == cab8)
				   	  	   	            cab8 = cab8->sig;
				   	  	   	          else
				   	  	   	          	u->sig = s->sig;
				   	  	   	          	delete(s);
				   	  	   	          	cout<<"\t\n Se eliminó correctamente\n\a";
				   	  	   	          	return;
				   	  	   	       
				   	  	        }
				   	  	     u = t;
				   	  	   	 s = t->sig;
				   	  	   
				   	  	   
				   	       }
				      }
				   else
				   	cout<<"\t\n La lista esta vacia";
			
				  
			}
		}
		v = v->sig;
		i++;
	}
	if(cont == 0)
		cout<<"\t\n El código no esta en lista\a\n";
}



   main (){


     cab8 = NULL;
     cab9 = NULL;
    char mas = 'n',accion;
    long dato;
    int op = 0;
    
    
    do{
    system("cls");
     system("color f2");
    cout<<"\t\t\t******************************************\n";
    cout<<"\t\t\t******************************************\n"; 
    cout<<"\t\t\t**      BIENVENIDOS A NUESTRO MENU      **\n";
    cout<<"\t\t\t**                                      **\n";
    cout<<"\t\t\t******************************************\n";
    cout<<"\t\t\t**    1) Llenar Nodo                    **\n";
    cout<<"\t\t\t**    2) Retirar Nodo                   **\n";
    cout<<"\t\t\t**    3) Valores Repetidos              **\n";
    cout<<"\t\t\t**    4) Agregar Estudiantes            **\n";
    cout<<"\t\t\t**    5) Actualizar Listas              **\n";
    cout<<"\t\t\t**    6) Retirar De las listas          **\n";
    cout<<"\t\t\t**    7) Agregar o Retirar              **\n";
    cout<<"\t\t\t**    8) Salir                          **\n";
	cout<<"\t\t        ******************************************\n";
	cout<<"\t\t        ******************************************\n";
    cout<<"*\t\t\t\t DIGITE UNA OPCION :                ";cin>> op;
   
       switch(op){
       	case 1 :
       		    
       			llenarPuntero();
       		break;
    	case 2 : 
    	  do{
    	  system("cls");
    	   cout<<"\t\t\t _______________\n\n";
    	  cout<<"\t\t\t Eliminar Enteros\n\n";
    	  cout<<"\t\t\t1) Ver los Nodos\n";
    	  cout<<"\t\t\t2) Eliminar los Nodos\n";
    	  cout<<"\t\t\t3) Salir\n";
    	  cout<<"\t\t\t _______________\n\n";
    	  cout<<"\t\t\t DIGITE UNA OPCION : ";cin>>op;  
    	  
           			switch(op){
		   					case 1:
		   						verPuntero();
		   						cout<<endl;
		   						system("pause");
		   					break;
		   					case 2:
		   					 retirarPuntero();
		   					break;
		    				case 3:
		    					cout<<"SALIO";   
		    				break;	
		    				default:
		    					cout<<"NO DIGITO UNA OPCION CORRECTA";
		    					break;
		   		  	  }
		   		  	  
		   		  	  }while(op != 3);
			case 3 : 
		    	 do{
    	           system("cls");
    	           cout<<"\t\t\t _________________\n\n";
    	  		   cout<<"\t\t\t RETIRAR REPETIDOS\n\n";
    	  		   cout<<"\t\t\t1) VER NODOS\n";
    	  		   cout<<"\t\t\t2) RETIRAR REPETIDOS\n";
    	    	   cout<<"\t\t\t3) SALIR\n";
    	    	   cout<<"\t\t\t _________________\n\n";
    	  		   cout<<"\t\t\t DIGITE UNA OPCION : ";cin>>op;  
           			switch(op){
		   					case 1:
		   					    verPuntero();
		   						cout<<endl;
		   						system("pause");
		   					break;
		   					case 2:
		   			            RetirarRepetidos();	
								cout<<endl;
		   					break;
		    				case 3:
		    				    cout<<"SALIO";
		    				break;	
		    				default:
		    					cout<<"NO DIGITO UNA OPCION CORRECTA";
		    					break;
		   		  	  }
		   		  	  
		   		  	  }while(op != 3);
    		break;
    		case 4 :
    			 do{
    	           system("cls");
    	           cout<<"\t\t\t ________________________\n\n";
    	  		   cout<<"\t\t\t ESTUDIANTES MATRICULADOS\n\n";
    	  		   cout<<"\t\t\t1) AGREGAR ESTUDIANTE\n";
    	  		   cout<<"\t\t\t2) VER ESTUDIANTES\n";
    	    	   cout<<"\t\t\t3) SALIR\n";
    	    	   cout<<"\t\t\t _________________________\n\n";
    	  		   cout<<"\t\t\t DIGITE UNA OPCION : ";cin>>op;  
           			switch(op){
		   					case 1:
		   					    	AgregarEstudiantes();
		   						cout<<endl;
		   					break;
		   					case 2:
		   			           		VerEtudiantes();
								cout<<endl;
								system("pause");
		   					break;
		    				case 3:
		    				    cout<<"SALIO";
		    				break;	
		    				default:
		    					cout<<"NO DIGITO UNA OPCION CORRECTA";
		    					break;
		   		  	  }
		   		  	  
		   		  	  }while(op != 3);
    		break;
    		case 5 : 
    		       do{
    	           system("cls");
    	           cout<<endl;
    	           cout<<"\t\t\t _________________\n\n";
    	  		   cout<<"\t\t\t CRUZAR LISTAS\n\n";
    	  		   cout<<"\t\t\t1) LLENAR NODO\n";
    	  		   cout<<"\t\t\t2) LLENAR NOD2\n";
    	  		   cout<<"\t\t\t3) VER LISTA\n";
    	    	   cout<<"\t\t\t4) CRUZAR\n";
    	    	   cout<<"\t\t\t5) SALIR\n";
    	    	   cout<<"\t\t\t _________________\n\n";
    	  		   cout<<"\t\t\t DIGITE UNA OPCION : ";cin>>op;  
           			switch(op){
		   					case 1:
		   					    llenarNodo();
		   					break;
		   					case 2:
		   			            llenarNodo2();
		   					break;
		    				case 3:
		    				   verNodo(); 
		    				break;	
		    				case 4:
		    				 ActualizarEstudiantes();
		    					break;
		    						case 5:
		    					cout<<"SALIO";
		    					break;
		    				default:
		    					cout<<"NO DIGITO UNA OPCION CORRECTA";
		    					break;
		   		  	  }
		   		  	  
		   		  	  }while(op != 5);
    		      
    		break;
    		case 6 :
    			do{
    	  system("cls");
    	  cout<<endl;
    	  cout<<"\t\t\t _________________\n\n";
    	  cout<<"\t\t\t RETIRAR ENTERO\n\n";
    	  cout<<"\t\t\t1) LLENAR NODOS1\n";
    	  cout<<"\t\t\t2) LLENAR NODOS2\n";
    	  cout<<"\t\t\t3) VER NODOS\n";
    	  cout<<"\t\t\t4) VER NODOS2\n";
    	  cout<<"\t\t\t5) RETIRAR NODO\n";
    	  cout<<"\t\t\t6) SALIR\n";
    	  cout<<"\t\t\t _________________\n\n";
    	  cout<<"\t\t\t DIGITE UNA OPCION : ";cin>>op;  
           			switch(op){
		   					case 1:
		   						llenarlista1();
		   					break;
		   					case 2:
		   					   llenarlista2();
		   						cout<<endl;
		   						system("pause");
		   					break;
		    				case 3:
		    				   verlista();
		    				    system("pause");
		    				break;	
		    				case 4:
		    				verlista1();
		    				system("pause");
		    					break;
		    					case 5:
		    						
									cruzar();
		    					    system("pause");
		    					    
		    						break;
		    							case 6:
		    						cout<<"SALIO";
		    						break;
		    				default:
		    					cout<<"NO DIGITO UNA OPCION CORRECTA";
		    					break;
		   		  	  }
		   		  	  
		   		  	  }while(op != 6);
		   		  
    		break;
			case 7 :
				do{
    	  system("cls");
    	  cout<<endl;
    	  cout<<"\t\t\t _________________\n\n";
    	  cout<<"\t\t\t Eliminar un Entero\n\n";
    	  cout<<"\t\t\t1) Llenar Cabeza 1\n";
    	  cout<<"\t\t\t2) Llenar Cabeza 2\n";
    	  cout<<"\t\t\t3) Ver Cabeza 1\n";
    	  cout<<"\t\t\t4) Ver Cabeza 2\n";
    	  cout<<"\t\t\t5) Retirar o Agregar\n";
    	  cout<<"\t\t\t6) Salir\n";
    	  cout<<"\t\t\t _________________\n\n";
    	  cout<<"\t\t\t DIGITE UNA OPCION : ";cin>>op;  
           			switch(op){
		   					case 1:
		   						do{
		   							system("cls");
		   							cout<<"\t\t _________________\n\n";
	                                cout<<"\n\t        Lista A   ";
		   						    cout<<"\n\t Escriba el codigo";
		   				            Agregar_Datos_L1(dato);
		   				            cout<<"\n\t    Desea seguir añadiendo : [s/n] : ";cin>>mas;
		   				            }while(mas != 'n');
		   					break;
		   					case 2:
		   						do{
		   							system("cls");
	                                cout<<"\n\t   Lista B        ";
		   						    cout<<"\n\t Escriba su codigo : ";
		   						    cin>>dato;
		   						    cout<<"\n\t Escriba una Accion [A/R] : ";
		   						    cin>>accion;
		   				            Agregar_Datos_L2(dato,accion);
		   				            cout<<"\n\t    Desea seguir añadiendo Nodos : [s/n] : ";cin>>mas;
		   				            }while(mas != 'n');
		   					
		   					break;
		    				case 3:
		    					
		    				  VerLista1();
		    				break;	
		    				case 4:
		    			    VerLista2();
		    				break;
		    				case 5:
		    				do{
		    				   system("cls");
	                           cout<<"\n\n\t\t\t   **** AGREGAR O RETIRAR ****";
		    				   cout<<"\n\n\n\n\n\n\n\n\t\t\t DIGITE EL CODIGO RETIRARA O AGREGAR : ";
		   					   cin>>dato;
		   				       Agregar_o_Retirar(dato);
		   				       cout<<"\n\n\n\n\n\n\n\n\t\t    DESEA SEGUIR AÑADIENDO NODOS : [s/n] : ";cin>>mas;
		   				    }while(mas != 'n');
		    						break;
		    						case 6:
		    						cout<<"SALIO";
		    						break;
		    				default:
		    					cout<<"NO DIGITO UNA OPCION CORRECTA";
		    					break;
		   		  	  }
		   		  	  
		   		  	  }while(op != 6);
		   		   
			break;	
			case 8:
				printf("\n\n\t\t\t!!! HA TERMINADO SU PROCESO !!!\n\n");
				cout<<endl;
				cout<<endl;
				cout<<endl;
		
					system("pause");
				break;
			default:
					cout<<"NO DIGITO UNA OPCION CORRECTA";
		    break;	
			
			
     }
    
}while(op != 8);



}

void llenarPuntero(){
 
    char seguir = 's';
    
    while(seguir == 's'){
	 
	  p = new Nod_1;
	  
	  if(p == NULL){
	  	system("cls");
	  	printf("\t ¡No Hay memoria disponible en disco! \a\n");
	  }
	  else{
	  	system("cls");
	  	cout<<"\t___________________________\n";
	  	cout<<"\t---Lenado de Nodos---\n";
	  	cout<<"\t Escriba un valor numerico: \n"; cin>>p->num;
	  	cout<<"\n El valor de su nodo es: "<<p->num;
	  	cout<<"\t___________________________\n";
	  	p->sig = NULL;
	  	if(cab == NULL){
	  		cab = p;
	  	}
	  	else{
	  		r = cab;
	  		while(r->sig != NULL){
	  			r = r->sig;
	  		}
	  		r->sig = p;
	  	}
	  }
	 
	 cout<<"\t    DESEA SEGUIR AÑADIENDO NODOS : [s/n] : "; cin>>seguir;  
		cout<<endl;
		cout<<endl;
		
    }
    
	
}

void verPuntero(){
	
	p = cab;
	
	if(cab == NULL){
		system("cls");
		cout<<"\n\t  ¡ Lista Vacia !  \n";
	}
	else{
	system("cls");
	cout<<"\n\t     Ver Nodo     ";
	cout<<"\n\t";
	while(p != NULL){
		cout<<"-->"<<" "<<"["<<p->num<<"]"<<" ";
		p = p->sig;
	}
	cout<<endl;

 }
 
 cout<<"\n \t";
 
}

 // Punto 1

void retirarPuntero(){
	
	int numero=0;
	char seguir = 's';
	while(seguir == 's'){
		
		system("cls");
		cout<<"\n\n\t\t\t       Eliminar Nodo    ";
		cout<<"\n\t Digite el valor a Retirar : ";cin>>numero;
		if(cab == NULL){
		
			cout<<"\n\t ¡ Lista vacia ! \n";
		
		}
		else{
			
						
				     p = cab;
			         char encontro = 'n';		
			         while(encontro == 'n' && p != NULL){
				     if(p->num == numero){
					     encontro = 's';
				     }
				     else{
					      p = p->sig;
				         }
			         }
			          if(encontro == 'n'){
				         cout<<"\n\t ¡El dato no esta dentro de la lista ! ";
			          }
			           else{
			           	
			                    if(cab->sig == NULL && p == cab){
			                    	cab = NULL;
						        delete(p); 
						      	cout<<"\t ¡ Su dato se eliminó !\n";
					        }
					      else{
				            if(p->sig == NULL){
					          q = cab;
					          while(q->sig != p){
						         q = q->sig;
					          }
					            q->sig = p->sig;
					            delete(p);
					            cout<<"\n\t ¡ Su dato se eliminó  !";
				           }
			            	else{
					          if(p == cab){
						         cab = cab->sig;
						         delete(p); 
						         cout<<"\n\t ¡ Su dato se eliminó !";
					           }
					            else{
					 	           q = cab;
					               while(q->sig != p){
						             q = q->sig;
					               }
					                 q->sig = p->sig;
					                 delete(p);
						             cout<<"\n\t ¡ Su dato se eliminó !";
					                }
					
				}
			}
		}
		
		                       cout<<"\n\t ¿Desea continuar ? [s/n] : "; cin>>seguir;
		
	                      	   cout<<endl;
		                       cout<<endl;
		                       
		
	}
	
}
	
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 // EJERCICOS 2

void RetirarRepetidos(){
	
	int numero = 0;
	char seguir = 's';
	
	system("cls");
	cout<<"\n\n\n\t\t\t !! RETIRAR REPETIDOS !!";
	
	while(seguir == 's'){
		
		cout<<"\n\n\n\n\n\n\n\n\t\t DIGITE EL VALOR A RETIRAR : "; cin>>numero;
		
		if(cab == NULL){
			cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t !! LA LISTA ESTA VACIA !! \n\n\n\n";
		}
		else
		{
			int cont = 0;
			p = cab;
			char encontro = 'n';
			while(p != NULL){
			  if(p->num == numero){
			  	   
				  cont = cont + 1;
			  	  p = p->sig;

			  }else{
			  	p = p->sig;
			  }			  
			
	      }
	      if(cont >= 2){
	      	
	      	 p = cab;
	      	  int i = 0;
	      	while(p != NULL && i < cont){
	      	 system("cls");
			   p = cab;
	      		
			         char encontro = 'n';		
			         while(encontro == 'n' && p != NULL){
			         
				     if(p->num == numero){
					     encontro = 's';
					     i++; 
				     }
				     else{
					      p = p->sig;
				         }
			         }
			          if(encontro == 'n'){
				         cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t!! EL DATO NO ESTA DENTRO DE LA LISTA !! ";
			          }
			           else{
			           	
			                    if(cab->sig == NULL && p == cab){
			                    	cab = NULL;
						        delete(p);
						      	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t !! SE ELIMINO CORRECTAMETE !!";
					        }
					      else{
				            if(p->sig == NULL){
					          q = cab;
					          while(q->sig != p){
						         q = q->sig;
					          }
					            q->sig = p->sig;
					            delete(p);
					            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t !! SE ELIMINO CORRECTAMETE !!";
				           }
			            	else{
					          if(p == cab){
						         cab = cab->sig;
						         delete(p);
						         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t !! SE ELIMINO CORRECTAMETE !!";
					           }
					            else{
					 	           q = cab;
					               while(q->sig != p){
						             q = q->sig;
					               }
					                 q->sig = p->sig;
					                 delete(p);
						             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t !! SE ELIMINO CORRECTAMETE !!";
					                }
					
				}
			}
		}
		
	      	
	      }
	
	
         }
         if(cont == 1 ){
         	system("cls");
         	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t !! EL VALOR ESTA EN LA LISTA PERO NO ESTA REPETIDO !!";
         }
        
         	if(cont == 0){
         		system("cls");
         		cout<<"\n\n\n\n\n\n\n\n\t\t\t !! EL VALOR NO ESTA EN LISTA !! \n\n\n\n";
         }

     }

	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\tDESEA SEGUIR RETIRANDO [s/n] : "; cin>>seguir;     
}

}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 // EJERCICOS 3


void AgregarEstudiantes(){
	
     	int l=0;
        char seguir = 's';
    	char encontro = 'n';
    while(seguir == 's'){
	 
	  m = new Nod_5;
	  
	  if(m == NULL){
	  	system("cls");
	  	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t !!! NO HAY MEMORIA DISPONIBLE EN EL SISTEMA!!!!");
	  }
	  else{
	  	
	  	system("cls");
	  	
	  	cout<<"\n\n\t\t\t    LLENAR NODOS ";
	  	cout<<"\n\n\t\t\t DIGTE EL NOMBRE DEL ESTUDIANTE : "; cin>>m->nom;
	  	cout<<"\n\n\t\t\t EL VALOR DEL NODO ES : "<<m->nom;
	  	m->sig = NULL;
	  		char encontro = 'n';
	  	
	  	if(cab1 == NULL){
	  		cab1 = m;
	  	}  
	          	else{
	          	     
	          		n = cab1;
	          		while(n != NULL && encontro == 'n'){
	             		 l=strcmp(n->nom,m->nom);
			             	if(l == 0){
	  			              encontro='s';
			                 }
			                 n= n->sig;
			                 
			             }
			                     
	  		                           if(encontro != 's'){
			                               o = cab1;
	  		                                   while(o->sig != NULL){
	  			                                     o = o->sig;
	  	                                         }
	  	               	                             o->sig = m;
	
                  			             }
			                             else
						                 {    
						                 	cout<<endl;
						                 system("cls");	
										 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\tEL ESTUDIANTE YA ESTA MATRICULADO";        	
			                             }
			               
			                      
	              
                 } 
                 
      }
      
       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\tDESEA SEGUIR AÑADIENDO NODOS : [s/n] : "; cin>>seguir;  
	    	cout<<endl;
	    	cout<<endl;
	    
     }
	
}




void VerEtudiantes(){
	
		m = cab1;
	
	if(cab1 == NULL){
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t LA LISTA ESTA VACIA";
	}
	else{
	system("cls");
	cout<<"\n\n\t\t\t\tVER UN NODO ";
	cout<<"\n\n\t\t";
	while(m != NULL){
		cout<<"-->"<<" "<<"["<<m->nom<<"]"<<" ";
		m = m->sig;
	}
	cout<<endl;
 }
		
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 // EJERCICOS 4
 
 void llenarNodo(){
 
    char seguir = 's';
    
    while(seguir == 's'){
	 
	  a = new Nod_4;
	  
	  if(a == NULL){
	  	system("cls");
	  	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t !!! NO HAY MEMORIA DISPONIBLE EN EL SISTEMA!!!!");
	  }
	  else{
	  	system("cls");
	  	cout<<"\n\n\t\t\t    LLENAR NODOS ";
	  	cout<<"\n\n\t\t\t DIGITE EL CODIGO : "; cin>>a->cod;
	  	cout<<"\n\n\t\t\t DIGITE LA NOTA 1 : "; cin>>a->n1;
	    cout<<"\n\n\t\t\t DIGITE LA NOTA 2 : "; cin>>a->n2;
	    cout<<"\n\n\t\t\t DIGITE LA NOTA 3 : "; cin>>a->n3;  
	  
	  	a->sig = NULL;
	  	
	  	if(cab2 == NULL){
	  		cab2 = a;
	  	}
	  	else{
	  		b = cab2;
	  		while(b->sig != NULL){
	  			b = b->sig;
	  		}
	  		b->sig = a;
	  	}
	  }
	 
	 cout<<"\n\n\n\n\n\n\n\n\n\t\t DESEA SEGUIR AÑADIENDO NODOS : [s/n] : "; cin>>seguir;  
		cout<<endl;
		cout<<endl;
		cout<<endl;
		
    }
    
	
}

void llenarNodo2(){
 
    char seguir = 's';
    
    while(seguir == 's'){
	 
	  d = new Nod_2;
	  
	  if(d == NULL){
	  	system("cls");
	  	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t !!! NO HAY MEMORIA DISPONIBLE EN EL SISTEMA!!!!");
	  }
	  else{
	  	system("cls");
	  	cout<<"\n\n\t\t\t    LLENAR NODOS ";
	  	cout<<"\n\n\t\t\t DIGITE EL NOMBRE : "; cin>>d->Nombre;
	  	cout<<"\n\n\t\t\t DIGITE EL CODIGO : "; cin>>d->cod2;
	  	
	  
	  	d->sig = NULL;
	  	
	  	if(cab3 == NULL){
	  		cab3 = d;
	  	}
	  	else{
	  		e = cab3;
	  		while(e->sig != NULL){
	  			e = e->sig;
	  		}
	  		e->sig = d;
	  	}
	  }
	 
	 cout<<"\n\n\n\n\n\n\n\n\n\t\t DESEA SEGUIR AÑADIENDO NODOS : [s/n] : "; cin>>seguir;  
		cout<<endl;
		cout<<endl;
		cout<<endl;
		
    }
    
	
}

void verNodo(){
	
	a = cab2;
	
	if(cab2 == NULL){
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t LA LISTA ESTA VACIA";
	}
	else{
	system("cls");
	cout<<"\n\n\t\t\t\t\t VER UN NODO ";
	cout<<"\n\n\t\t\t\t";
	while(a != NULL){
		
		cout<<"EL CODIGO ES : "<<a->cod<<"\n\t\t\t\t";
		cout<<"LA NOTA # 1  : "<<a->n1<<"\n\t\t\t\t";
		cout<<"LA NOTA # 2  : "<<a->n2<<"\n\t\t\t\t";
		cout<<"LA NOTA # 3  : "<<a->n3<<"\n\n\t\t\t\t";
			
		a = a->sig;
	}

	 getch();
    }
	
	d  = cab3;
	
	if(cab3 == NULL){
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t LA LISTA ESTA VACIA";
	}else
	{
	
	    cout<<"EL NOMBRE ES : "<<d->Nombre<<"\n\t\t\t\t";
	   cout<<"LA DEFINITIVA ES : "<<d->def<<"\n\t\t\t\t";
		
			
		d = d->sig;
		
	}
	
	getch();
	  
}

void ActualizarEstudiantes(){

     long ced =0;
     char seguir = 's';
     
     while(seguir == 's'){
     	
     	
     		system("cls");
     		cout<<"\n\n\t\t\t\tACTUALIZAR LISTAS\n\n\n";
     	cout<<"\t\t DIGITE EL CODIGO DEL ESTUDIANTE A BUSCAR : ";cin>>ced;
     	
     	a = cab2;
     	while(a != NULL){
     		if(a->cod == ced){
     			system("cls");
     			cout<<"\t\t\n\n\n\n\n EL ESTUDIANTE ESTA EN LA LISTA\n\n\n";
                d = cab3;
				while(d != NULL){
					if(d->cod2 == ced){
					    system("cls");
						cout<<"\n\n\n\n\n\t\t\t\t HAY NOTAS \n\n\n";
						d->def = ((a->n1 * 0.3)+(a->n2 * 0.3)+(a->n3 * 0.4));
					}
					else{
						system("cls");
						cout<<"\t\t\t\t\n\n\n\n\n EL ESTUDIANTE NO TIENE DATOS\n\n\n\n\n";
					}
					d = d->sig;
				} 			
     		}
     		else
     		{
     			system("cls");
     			cout<<"\t\t\t\t\n\n\n\n\n EL ESTUDIANTE NO EXISTE n\n\n\n\n";
     		}
     		a = a->sig;
     	}
     	
     	
     	cout<<"\t DESEA SEGUIR CALCULANDO LAS NOTAS DE LOS ESTUDIANTES [s/n] : ";cin>>seguir;
     }

    
 	
	
	
	
	
	
	
	
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
 // EJERCICOS 5


   
   void llenarlista1(){
   	
   	char seguir = 's';
    
    while(seguir == 's'){
	 
	  g = new Nod_3;
	  
	  if(g == NULL){
	  	system("cls");
	  	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t !!! NO HAY MEMORIA DISPONIBLE EN EL SISTEMA!!!!");
	  }
	  else{
	  	system("cls");
	  	cout<<"\n\n\t\t\t    LLENAR NODOS ";
	  	cout<<"\n\n\t\t\t DIGITE EL VALOR DEL NODO : "; cin>>g->numero;
	  	cout<<"\n\n\t\t\t EL VALOR DEL NODO ES : "<<g->numero;
	  	g->sig = NULL;
	  	if(cab4 == NULL){
	  		cab4 = g;
	  	}
	  	else{
	  		h = cab4;
	  		while(h->sig != NULL){
	  			h = h->sig;
	  		}
	  		h->sig = g;
	  	}
     }

       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t DESEA SEGUIR AÑADIENDO NODOS : [s/n] : "; cin>>seguir;  
  }


}

    void llenarlista2(){
		
		 	char seguir = 's';
    
    while(seguir == 's'){
	 
	  j = new No_4;
	  
	  if(j == NULL){
	  	system("cls");
	  	printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t !!! NO HAY MEMORIA DISPONIBLE EN EL SISTEMA!!!!");
	  }
	  else{
	  	system("cls");
	  	cout<<"\n\n\t\t\t    LLEB¿NAR NODOS ";
	  	cout<<"\n\n\t\t\t DIGITE EL VALOR DEL NODO : "; cin>>j->numero2;
	  	cout<<"\n\n\t\t\t EL VALOR DEL NODO ES : "<<j->numero2;
	  	j->sig = NULL;
	  	if(cab5 == NULL){
	  		cab5 = j;
	  	}
	  	else{
	  		k = cab5;
	  		while(k->sig != NULL){
	  			k = k->sig;
	  		}
	  		k->sig = j;
	  	}
     }

       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t DESEA SEGUIR AÑADIENDO NODOS : [s/n] : "; cin>>seguir;  
    }

		
	}
	
	
	
	void verlista(){
	
	g = cab4;
	
	if(cab4 == NULL){
		system("cls");
		cout<<"\t LA LISTA ESTA VACIA\n\a";
	}
	else{
	system("cls");
	cout<<"\n\n\t\t\t\tVER UN NODO ";
	cout<<"\n\n\t\t\t\t";
	while(g != NULL){
		//cout<<t2->numero<<" ";
		cout<<"-->"<<" "<<"["<<g->numero<<"]"<<" ";
		g = g->sig;
	}
	cout<<endl;
 }


}



void verlista1(){

      	j = cab5;
	
	if(cab5 == NULL){
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t LA LISTA ESTA VACIA";
	}
	else{
	system("cls");
	cout<<"\n\n\t\t\t\tVER UN NODO ";
	cout<<"\n\n\t\t\t\t";
	while(j != NULL){
		cout<<"-->"<<" "<<"["<<j->numero2<<"]"<<" ";
		j = j->sig;
	}
	cout<<endl;
 }
 
}

void cruzar(){
	
     	if(cab4==NULL || cab5==NULL){
     		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t NO HAY SOLUCION";
		}
		else{
			j=cab5;
			
			while(j!=NULL){
			
				
						g=cab4;
					
					while(g!=NULL){
					
						if(g->numero==j->numero2){
							if(cab4->sig == NULL && g == cab4){
			                    	cab4 = NULL;
						        delete(g);	
					        }
					      else{
				            if(g->sig == NULL){
					          h = cab4;
					          while(h->sig != g){
						         h = h->sig;
					          }
					            h->sig = g->sig;
					            delete(g);
				           }
			            	else{
					          if(g == cab4){
						         cab4 = cab4->sig;
						         delete(g);
					           }
					            else{
					 	           h = cab4;
					               while(h->sig != g){
						             h = h->sig;
					               }
					                 h->sig = g->sig;
					                 delete(g);
					                }
					
									}
					}
					 g=h->sig;
					  }
					
			             
						
						else{
							g=g->sig;
						}

							
							
					
					
					}
				
				j=j->sig;
			}
			
			
		}
        system("cls");
        cout<<"\n\n\n\n\n\n\t\t\tSE ELIMINARON CORRECTAMENTE";
        cout<<endl;
}


 


