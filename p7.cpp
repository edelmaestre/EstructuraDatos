#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;


void persistencia1();
void persistencia2();
void cruce();

struct lista1 {
	int numero;
	lista1 *sig1;
};
lista1 *p1, *q1, *r1, *cab1, *fin1;

struct lista2 {
	int numero;
	char accion;
	lista2 *sig2;
};
lista2 *p2, *q2, *r2, *cab2, *fin2;
/* run this p1rogram using the console p1auser or add your own getch, system("p1ause") or inp1ut loop1 */


int main(int argc, char** argv) {
	persistencia1();
	persistencia2();
	cruce();
}

void cruce() {
	q2 = cab2;
	int cont = 0;
	while (q2 != NULL) {
		cout << "numero: " << cont++;
		q1 = cab1;
		while (q1 != NULL) {
			if (q1->numero == q2->numero)
			{

				if ( q2->accion == 'r')
				{
					if (cab1 == q1)
					{
						cab1 = q1->sig1;
						delete(q1);
						q1 = cab1;
					} else {
						r1 = cab1;
						while (r1->sig1 != q1) {
							r1 = r1->sig1;
						}
						r1->sig1 = q1->sig1;
						delete(q1);
						q1 = r1;
					}

				} else {
					if (cab1 == NULL)
					{
						cab1->numero = q2->numero;
						cab1->sig1 = NULL;
					} else {
						r1 = cab1;
						while (r1 != NULL) {
							r1 = r1->sig1;
						}
						p1 = new (lista1);
						p1->numero  = p2->numero;
						p1->sig1 = NULL;
						r1->sig1 = p1->sig1;

					}
				}

			}
			q1 = q1->sig1;
		}
		p2 = p2->sig2;
	}
}


void persistencia1() {
	p1 = new(lista1);
	p1->numero = 001;
	p1->sig1 = NULL;
	cab1 = p1;
	fin1 = p1;

	p1 = new(lista1);
	p1->numero = 002;
	p1->sig1 = NULL;
	fin1->sig1 = p1;
	fin1 = p1;


	p1 = new(lista1);
	p1->numero = 003;
	p1->sig1 = NULL;
	fin1->sig1 = p1;
	fin1 = p1;

	p1 = new(lista1);
	p1->numero = 004;
	p1->sig1 = NULL;
	fin1->sig1 = p1;
	fin1 = p1;

	p1 = new(lista1);
	p1->numero = 005;
	p1->sig1 = NULL;
	fin1->sig1 = p1;
	fin1 = p1;


	q1 = cab1;
	cout << "contenido de la primera perccistencia" << endl;
	cout << "\n\n______________________________________________________________" << endl;
	while (q1 != NULL) {
		cout << "numero: " << q1->numero << endl;
		cout << "______________________________________________________________" << endl;
		q1 = q1->sig1;
	}
}
void persistencia2() {
	p2 = new(lista2);
	p2-> numero = 1;
	p2->accion = 'r';
	p2->sig2 = NULL;
	cab2 = p2;
	fin2 = p2;

	p2 = new(lista2);
	p2->numero = 2;
	p2->accion = 'a';
	p2->sig2 = NULL;
	fin2->sig2 = p2;
	fin2 = p2;

	p2 = new(lista2);
	p2->numero = 3;
	p2->accion = 'r';
	p2->sig2 = NULL;
	fin2->sig2 = p2;
	fin2 = p2;

	p2 = new(lista2);
	p2->numero = 4;
	p2->accion = 'a';
	p2->sig2 = NULL;
	fin2->sig2 = p2;
	fin2 = p2;

	p2 = new(lista2);
	p2->numero = 5;
	p2->accion = 'a';
	p2->sig2 = NULL;
	fin2->sig2 = p2;
	fin2 = p2;

	p2 = new(lista2);
	p2->numero = 7;
	p2->accion = 'a';
	p2->sig2 = NULL;
	fin2->sig2 = p2;
	fin2 = p2;

	p2 = new(lista2);
	p2->numero = 8;
	p2->accion = 'r';
	p2->sig2 = NULL;
	fin2->sig2 = p2;
	fin2 = p2;


	q2 = cab2;
	cout << "\n\ncontenido de la segunda perccistencia";
	cout << "\n\n_____________________________________________________________" << endl;
	while (q2 != NULL) {
		cout << "numero: " << q2->numero << endl;
		cout << "accion: " << q2->accion << endl;
		cout << "______________________________________________________________" << endl;
		q2 = q2->sig2;
	}
}
