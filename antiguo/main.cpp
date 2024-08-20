#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <conio.h>
# include <windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


void persistencia();
void eliminarRepetidos();
void eliminarNumero();
void informe();
void agregarsinRepetir();


struct entero {
	int numero;
	entero *sig;
};
entero *p, *q, *r, *cab, *fin;

struct estudiante{
string nombre;
estudiante *sig;
}; 

estudiante *p2, *q2, *r2, *cab2, *fin2;


void persistencia() {

	p = new(entero);
	p->numero = 3;
	p->sig = NULL;
	cab = p;
	fin = p;

	p = new(entero);
	p->numero = 7;
	p->sig = NULL;
	fin->sig = p;
	fin = p;

	p = new(entero);
	p->numero = 3;
	p->sig = NULL;
	fin->sig = p;
	fin = p;

	p = new(entero);
	p->numero = 4;
	p->sig = NULL;
	fin->sig = p;
	fin = p;

	p = new(entero);
	p->numero = 2;
	p->sig = NULL;
	fin->sig = p;
	fin = p;

	p = new(entero);
	p->numero = 9;
	p->sig = NULL;
	fin->sig = p;
	fin = p;

	p = new(entero);
	p->numero = 2;
	p->sig = NULL;
	fin->sig = p;
	fin = p;

	p = new(entero);
	p->numero = 5;
	p->sig = NULL;
	fin->sig = p;
	fin = p;

	p = new(entero);
	p->numero = 2;
	p->sig = NULL;
	fin->sig = p;
	fin = p;

	p = new(entero);
	p->numero = 7;
	p->sig = NULL;
	fin->sig = p;
	fin = p;

	p = new(entero);
	p->numero = 3;
	p->sig = NULL;
	fin->sig = p;
	fin = p;

}


int main() {
	persistencia();
	char continuar = 's';
	int op;
	do
	{
		cout << " Punto 2 y 3\n\n";
		cout << " 1: eliminar numeros\n";
		cout << " 2: eliminar repetidos\n";
		cout << " 4. agregar sin repetir";
		
		cout << "\n\ndigita una opcion:"; cin >> op;

		switch (op) {
		case 1: eliminarNumero(); break;
		case 2: eliminarRepetidos(); break;
		case 4: agregarsinRepetir(); break;
		}

	} while (continuar == 's');

}

void agregarsinRepetir(){
	p2 = new(estudiante);
	string dato="";
	char encontro='n'; 
	
	cout << "escriba nombre de estudiante a insertar";
		getline(cin,dato);

	if(p2 == NULL){
		cout<<"no hay memoria";
	}else{
		
		q2=cab2;
		
		while(q2!=NULL){
			if(q2->nombre==dato){
				encontro='s';
			}
			
		}
		
		if(encontro=='s'){
			cout<<"ya existe";
		}else{
			p2->nombre=dato;
			p2->sig=NULL;
			
			if(cab==NULL){
				cab2=p2;
			}else{
				q2=cab2;
				
				while(q2->sig != NULL){
					q2 = q2->sig;
				}
				q->sig=p;
			}
		}
		
		
		
	
			
			
		
	}
	
	
}



void eliminarNumero() {
	informe();

	if (cab == NULL) {
		cout << "No hay memoria";
	} else {

		int dato;
		cout << "ingresa el dato a borrar";
		cin >> dato;

		q = cab;
		char encontro = 'n';
		while (q != NULL and encontro == 'n') {
			if (q->numero == dato) {
				cout << "Dato encontrado...\n";
				cout << q->numero;
				encontro = 's';
				char seguro = 'n';
				cout << "Está seguro que desea eliminar?";
				cin >> seguro;
				if (seguro == 's') {
					r = cab;
					while (r->sig != q) {
						r = r->sig;
					}

					r->sig = q->sig;
					delete(q);
				}


			}
			q = q->sig;

		}

	}

	informe();

}


void eliminarRepetidos() {
	informe();
	int contador = 0;

	if (cab == NULL) {
		cout << "No hay memoria";
	} else {
		q = cab;
		char encontro = 'n';
		while (q != NULL and encontro == 'n') {
			p = q->sig;
			while (p != NULL) {
				if (p->numero == q->numero) {
					if (cab == p)
					{
						cab = p->sig;
						delete(p);
						p = cab->sig;
					} else {
						r = cab;
						while (r->sig != p) {
							r = r->sig;
						}
						r->sig = p->sig;
						delete(p);
						p = r->sig;
					}
				} else {
					p = p->sig;
				}
			}

			q = q->sig;
		}
	}

	informe();

}

void informe() {
	cout << "informe...\n";

	q = cab;
	while (q != NULL) {
		cout << "\n ";
		cout << q->numero;
		q = q->sig;
		cout << "\n ";
	}
}
