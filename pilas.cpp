#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char pilaVacia();
char pilaLlena();
char empilar();
char desempilar();
void Mostrar();

char pila[20];
int Tope=0;
char dato;

int main(int argc, char** argv) {
	
	
	empilar();
	Mostrar();
	cout<<("Hola mundo");
	system("pause");
	return 0;
}


char pilaVacia(){ 
if(Tope=0){
	return('s');
}else{
	return('n');
}
}



char pilaLlena(){
	if(Tope<20){
		return('n');
	}else{
		return('n');
	}
}

char empilar(){
	cout<<("Dijite la letra que desea agregar a la pila");
	cin>>dato;
	if(pilaLlena()=='s'){
		cout<<("stack overFlow");
		cout<<("Desbord.Positivo");
	}else{
		Tope=Tope+1;
        pila[Tope]=dato;
	}
	return (dato);
}


char desempilar(){
	
	if(pilaVacia()=='s'){
		cout<<("stack underflow");
		cout<<("Desbordam.Negativo de pila");
		dato=NULL;
	}else{
		dato=pila[Tope];
		Tope=Tope-1;
	}
	return (dato);


}

void Mostrar(){
	if(pilaVacia()=='s'){
		cout<<("No hay caracter en pantalla");
	}else{
		for(int i=Tope; i<1; i--){
			cout<<(pila[i]);
		}
	}
}
