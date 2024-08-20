
#include <iostream>
#include <string>
#include <studio.h>

using namespace std;
struct  carro{
    int modelo;
    string nom;
    string  placa;
    carro *sig; 
};  
carro *cab, *p, *q, *fin,*pos,*r;
void consultar();
void consultar_v2();
void registrar_datos();
void Retirar();
void menu();
void Actualizar();
void listadoGeneral();
void registrar_datos_v2();
void registrar_datos_v3();
char consultar_dato(string pc);

int main(int argc, char** argv) {
	menu();
	return 0;
}
void menu(){
char fin='s';
 do{
 	system("cls");
    int op;
    
        cout << "\n\t\t****** MENU PRINCIPAL *******\n";
        cout << "\t\t-----------------------------" << endl << endl;
        cout << "\t\t1. Registrar_Datos V1.0" << endl;
        cout << "\t\t2. Registrar_Datos V2.0 " << endl;
        cout << "\t\t3. Registrar_Datos V3.0" << endl;
        cout << "\t\t4. Listado de Vehiculo" << endl;
        cout << "\t\t5. Consultar Vehiculo V1.0" << endl ;
        cout << "\t\t6. Consultar Vehiculo V2.0" << endl;
        cout << "\t\t7. Retirar Vehiculo V1.0" << endl; 
        cout << "\t\t8. Retirar Vehiculo V2.0" << endl;
        cout << "\t\t9. Actualizar V2.0" << endl;
        cout << "\t\t10.Salir" << endl;
        cout << "\t\t-----------------------------" << endl << endl;
        cout << "\t\tElije una opcion: ";cin>>op;

 
 
		switch(op)
		{
			case 1:
				system ("CRS");
			 		registrar_datos();
					break;
 
			case 2:
					system ("CRS");
					registrar_datos_v2();
					break;
 
			case 3:
					system ("CRS");
			    	registrar_datos_v3();
					break;
 
			case 4:
					system ("CRS");
					listadoGeneral();
					break;
 
			case 5:
					system ("CRS");
					consultar();
					break;

            case 6:
            		system ("CRS");
                    consultar_v2();
                	break;
 
            case 7:
            		system ("CRS");
            	    Retirar();
               		break;
 
 			 case 8:
 			 		system ("CRS");
                	Retirar();
                	break;
                	
        	case 9:
        			system ("CRS");
                	Actualizar();
                	break;
                	
            case 10:
            		system ("CRS");
                	fin ='n';
                	break;
                	
			default:
					system ("CRS");
					system("cls");
					cout << "\a\t opcion no valida.\a\n";
								
		}
    }while(fin=='s');
}


void registrar_datos(){
	system("cls");
    char seguir= 's';
    while (seguir == 's'){
        p= new(carro);
        if (p==NULL){
            cout<<"no hay memoria en Disco";
            }else{
                //llenemos el nodo
              cout<<"introduzca el nombre:\n";
              cin>>p->nom; 
              cout<<"introduzca placa del vehiculo:\n";
              cin>>p->placa; 
              cout<<"introduzca Modelo del vehiculo:\n";
              cin>>p->modelo;
              // balancemos el nodo
              p->sig= NULL;

              //Es el primer nodo de la lista?
              if (cab== NULL){
                  cab=p;
              }else{
                  //recorremos la lista desde la cabeza hasta el ultimo nodo
                r = cab;
                while(r->sig!=NULL){
                    r = r->sig;  
                }
                  r->sig=p;

              }

        }
        cout<<"\t Desea agregar otro vehiculo:[s/n]";cin>>seguir;


    }

}

 void registrar_datos_v2(){
 		char resp='s';
 	 do{
 	 	
 		   p=new (carro);
 	       if (p==NULL){
 		    
			cout<<"\tno hay memoria en Disco \n'"; 			
		    }else{
			 	//se llena el nodo
			 	cout<<"nombre del propietario: \n"; cin>>p->nom;
			 	cout<<"placa del vehiculo: \n"; cin>>p->placa;
			 	cout<<"modelo del vehiculo: \n"; cin>>p->modelo;
			 	//Balancemos el nodo
		 	
		 	     p->sig=NULL;
		 	
			 	 if(cab==NULL){
			 		cab=p;
			 		fin=cab;
				}else{
				 	fin->sig=p;
				 	fin=p;
			        } 
		    }
		    cout<<"\nDesea ingresar otro vehiculo: [S/N]";
		    cin>>resp;
	    }while(resp=='s');
    }
    
    void registrar_datos_v3(){
        cout<<"\n\t****REGISTRO DE VEHICULO*****\n";
    	char mas='s';
    	
    	do{
    		char resp;
    	    string pc ;
			cout<<"\n\t digite la placa de su vehiculo: ";
		    cin>>pc;
    		resp=consultar_dato(pc);
    		if(resp!='s'){
				p=new(carro);
				if(p==NULL){
					cout<<"\t no hay memoria en Disco!";
				}else{
					//lleno el nodo
					cout<<"\n \t  nombre del propietario: ";cin>>p->nom;
					p->placa=pc;
					cout<<"\t modelo del vehiculo: "; cin>>p->modelo;
					//Balancemos el nodo a la lista !!
					p->sig =NULL;
					if(cab==NULL){
						cab=p;
						fin=cab;
					}else{
						fin->sig=p;
						fin =p;
					}
				}
			}
	    	cout<<"\t quiere usted ingresar otro vehiculo? [S/N]"; cin>>mas;
		}while(mas=='s');
	}
	
 void consultar(){
    char seguir='s';
    string  dato;

    while(seguir=='s'){
        cout<<"\t placa a consultar: ";
        cin>>dato;
        p= cab;
        char encontro='n';int cont=0;
        while((encontro=='n')&&(p!=NULL)){
            cont++;
            if (p->placa== dato){
               encontro='s';
               pos=p;
            }else{
                p=p->sig; 
            }
        }
        if (encontro=='s')
        {
             cout<<"\t carro encontrado en la posicion "<<cont<<"\n";
             cout<<"\t nombre: "<<pos->nom<<"\n";
             cout<<"\t placa: "<<pos->placa<<"\n";
             cout<<"\t modelo: "<<pos->modelo<<"\n" ;        
        }else{
             cout<<"\t el vehiculo no esta en lista";
        }
        cout<<"\t Desea consultar otro vehiculo? [S/N]";
        cin>>seguir;
    }
 }
 
  void consultar_v2(){
    char seguir='s';
    string  dato;

    while(seguir=='s'){
        cout<<"\t placa a consultar: \a";
        cin>>dato;
        p= cab;
        char encontro='n';int cont=0;
        while(p!=NULL){
            cont++;
            if (p->placa== dato){
               encontro='s';
               pos=p;
               cout<<"\t carro encontrado en la posicion "<<cont<<"\n\a";
            }else{
                p=p->sig; 
            }
        }
        if (encontro=='s')
        {
            
             cout<<"\t nombre: "<<pos->nom<<"\n";
             cout<<"\t placa: "<<pos->placa<<"\n";
             cout<<"\t modelo: "<<pos->modelo<<"\n" ;        
        }else{
             cout<<"\t el vehiculo no esta en lista\a";
        }
        cout<<"\t Desea consultar otro vehiculo? [S/N]";
        cin>>seguir;
    }
 }
 
 
 
 
 char consultar_dato(string pc){
		char encontro='n';
		if(cab==NULL){
			cout<<" \n\t la Lista esta vacia!!...";		
		}else{
		    p=cab;
	
		    while((encontro=='n')&&(p!=NULL)){
		    	if(p->placa==pc){
		    		encontro='s';
		    		cout<<"\t ya esta registrado!!...\n";
		    	    cout<<"\n\t***INFORMACION DE SU VEHICULO*****\n";
					cout<<"\tplaca del vehiculo: "<<p->placa ;
		    		cout<<"\n";
		    		cout<<"\tmodelo del vehiculo: "<<p->modelo;
		    		cout<<"\n";
		    		cout<<"\tnombre del propietario: "<<p->nom;
					cout<<"\n";	
				}else{
				      p=p->sig;
				}
				
				if (encontro=='n'){
					cout<<"\t el vehiculo no se encuentra registrado!..\a\n \n";
				}
			}
		}
		return encontro;
}
 
void Retirar(){
    char seguir='s';
    string dato;
    while(seguir=='s'){
      cout<<"Digite la placa del vehicula a Eliminar: ";  
      cin>>dato;
   
  
	      if (cab==NULL){
	        cout<<"La lista esta vacia";
	      }else{
	        p=cab; char encontro='n';
	         while ((encontro=='n')&&(p!=NULL)){
	            if (p->placa==dato){
	                encontro='s';
	            }else{
	                p=p->sig;
	            }
	         }
	         if (encontro=='n'){
	            cout<<"el vehiculo no esta!";
	         }else{
	         	   if(cab->sig == NULL){
	         	   	char opcion='s';
      				cout<<"en la lista solo hay un elemento!!...estas  seguro de eliminar?: [s/n] ";cin>>opcion;
					  if(opcion=='s'){
					  	delete(cab);
					  	cout<<"\n elemento elimiando correctamente \a";
					  }
  	  				}else{
			            if (p->sig==NULL)
			            {
			                    q= cab;
			                    while(q->sig!=p){
			                        q=q->sig;                        
			                    }
			                    q->sig=p->sig;
			                    delete(p);
			                    cout<<"\n elemento elimiando correctamente \a";
			            }else{
			                if (p==cab){
			                    cab= cab->sig;
			                    delete(p);
			                    cout<<"\n elemento elimiando correctamente \a";
			                }else  {
			                    if (p->sig==NULL){
			                        q= cab;
			                        while(q->sig!=p){
			                            q=q->sig;                        
			                        }
			                        q->sig=p->sig;
			                        delete(p);
			                        cout<<"\n elemento elimiando correctamente \a";
			                    }
			                }
			            }
		        	}

		    }
	   	}
	cout<<"Desea elimianr otro vehiculo? [S/N]";
	cin>>seguir;
}
}


void Actualizar(){
 char seguir='s';
 string dato;
	    while(seguir=='s'){
		      cout<<"Digite la placa del vehiculo a Actualizar: ";  
		      cin>>dato;
	       if (cab==NULL){
		        cout<<"La lista esta vacia";
		   }else{
			     p=cab; char encontro='n';
			      while ((encontro=='n')&&(p!=NULL)){
			            if (p->placa==dato){
			           
					        encontro='s';
			            }else{
			                p=p->sig;
			            }
			     }
			      if (encontro=='n'){
			            cout<<"el vehiculo no esta!";
			      }else{
	         	   
					  	cout<<"ingrese el nuevo nombre del propietario: ";
					  	cin>>p->nom;
						cout<<"\n";
					  	cout<<"ingrese el modelo: ";
					  	cin>>p->modelo;
						cout<<"\n";
						
					  	cout<<"\n elemento ha si actualizado correctamente \a";
				  }
  	  	  }
  	  	  cout<<"Desea actualizar otro vehiculo? [S/N]";cin>>seguir;
        }
			      
		         
		   
}
void listadoGeneral(){
	cout<<"\t\t*****LISTADO GENERAL DE VEHICULOS****";
	if(cab==NULL){
		cout<<"la lista esta vacia";
	}else{

       p=cab;
        while(p!=NULL){
        	
           	cout <<"\n\t______________________________\n" ; 
             cout<<"\tnombre: "<<p->nom<<"\n";
             cout<<"\tplaca: "<<p->placa<<"\n";
             cout<<"\tmodelo: "<<p->modelo<<"\n" ;  
			 cout <<"\t______________________________\n" ;   
           p=p->sig;
        }
    }
    system("PAUSE");
 }
 





