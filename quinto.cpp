#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cctype>
using namespace std;
/* 5.) Escriba una solución al problema consistente en ACTUALIZAR un campo de información de
una Lista Enlazada Simple basado en los datos de Otra lista igualmente enlazada simple.
(A esta actividad se le denomina CRUZAR las listas).*/

struct numeros {
	int cod;
	float num1;
	float num2;
	numeros *sig;

};
numeros *np, *nq, *nr, *ncab;

struct operaciones {
	int codNum;
	float suma = 0;
	float resta = 0;
	float multi = 0;
	float divi = 0;
	operaciones *sig;

};
operaciones *p, *q, *r, *cab;

void InicializarLista1();
void InicializarLista2();
void InformacionLista1();
void InformacionLista2();
void cruzarListas();

int main(int argc, char** argv) {
	bool continuar = true;
	do
	{
		system("cls");
		int op;
		cout << "      CRUZAR las listas" << endl << endl;
		cout << "1: Inicializar lista de numeros" << endl;
		cout << "2: Inicializar lista de operaciones" << endl;
		cout << "3: Informacion Lista Numeros" << endl;
		cout << "4: Informacion lista Operaciones" << endl;
		cout << "5: Cruzar lista" << endl;
		cout << "6: Salir" << endl;
		cout << "Digite una opcion: "; cin >> op;
		switch (op) {
		case 1: InicializarLista1(); break;
		case 2: InicializarLista2(); break;
		case 3: InformacionLista1(); break;
		case 4: InformacionLista2(); break;
		case 5: cruzarListas(); break;
		case 6: exit(0); break;
		default: break;
		}
	} while (continuar == true);
	return 0;
}
void InicializarLista1() {
	char seg = 'n';
	do {
		system("cls");
		np = new(numeros);
		if (np == NULL)
		{
			cout << "no hay memoria disponible";
		} else {
			cout << "Registrar Numeros" << endl << endl;
			cout << endl;
			cout << "Codigo: "; cin >> np->cod;
			cout << endl;
			cout << "numero 1: "; cin >> np->num1;
			cout << endl;
			cout << "Numero 2: "; cin >> np->num2;
			cout << endl;
			np->sig = NULL;

			cout << endl;
			cout << endl;
			if (ncab == NULL)
			{
				ncab = np;
			} else {
				nq = ncab;
				while (nq->sig != NULL) {
					nq = nq->sig;
				}
				nq->sig = np;
			}
		}

		cout << "Deseas agregar mas nuemeros? [s/n]"; cin >> seg;
	} while (seg == 's');
}


void InicializarLista2() {
	char seg = 'n';
	do {
		system("cls");
		p = new(operaciones);
		if (p == NULL)
		{
			cout << "no hay memoria disponible";
		} else {
			cout << "Registrar Operaciones" << endl << endl;
			cout << endl;
			cout << "Registrar codigo: "; cin >> p->codNum;;
			cout << endl;
			cout << endl;
			cout << endl;
			p->sig = NULL;
			if (cab == NULL)
			{
				cab = p;
			} else {
				q = cab;
				while (q->sig != NULL) {
					q = q->sig;
				}
				q->sig = p;
			}
		}

		cout << "Deseas agregar otra información? [s/n]"; cin >> seg;
	} while (seg == 's');

}

void InformacionLista1() {
	int op = 0;
	system("cls");
	if (ncab == NULL)
	{
		cout << "Lista Vacia nada que mostrar \a\a" << endl << endl;
	} else {
		cout << "Informe de numeros" << endl << endl;
		nq = ncab;
		cout << "___________________________________________________________________________________________" << endl;
		while (nq != NULL) {
			cout << "Codigo Numero: " << nq->cod << endl;
			cout << "Numero 1: " << nq->num1 << endl;
			cout << "Numero 2: " << nq->num2 << endl;
			cout << "___________________________________________________________________________________________" << endl;
			nq = nq->sig;
		}
	}

	system("pause");
}

void InformacionLista2() {
	int op = 0;
	system("cls");
	cout << "Informe" << endl << endl;
	if (cab == NULL)
	{
		cout << "Lista Vacia nada que mostrar \a\a" << endl << endl;
	} else {

		q = cab;
		cout << "___________________________________________________________________________________________" << endl;
		while (q != NULL) {
			cout << "Codigo Numero: " << q->codNum << endl; 
			cout << "Suma: " << q->suma << endl;
			cout << "Resta: " << q->resta << endl;
			cout << "Multiplicacion: " << q->multi << endl;
			cout << "Divicion: " << q->divi << endl;
			cout << "___________________________________________________________________________________________" << endl;
			q = q->sig;
		}
	}

	system("pause");
}

void cruzarListas() {
	system("cls");
	cout << "CRUCE DE LAS LISTAS" << endl << endl;
	if (ncab == NULL or cab == NULL)
	{
		cout << "Algunas de las Lista esta Vacia nada que cruzar\a\a" << endl << endl;
	} else {
		nq = ncab;
		while (nq != NULL) {
			q = cab;
			while (q != NULL) {
				if (q->codNum == nq->cod)
				{
					q->suma = nq->num1 + nq->num2;
					q->resta = nq->num1 - nq->num2;
					q->multi = nq->num1 * nq->num2;
					q->divi = nq->num1 / nq->num2;
				}
				q = q->sig;
			}
			nq = nq->sig;
		}
	}
}

