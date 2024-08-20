typedef double TipoDato;
#include "pila.h"

void crearPila(Nodo** pila)
{
    *pila=NULL;
}

int pilaVacia(Nodo* pila)
{
	return pila == NULL
}

int insertar(Nodo ** pila, TipoDato elemento)
{
	Nodo* nuevo;

	nuevo =(Nodo*)malloc(sizeof(Nodo));
	nuevo->elemento= elemento;
	nuevo->siguiente=*pila;
	(*pila)=nuevo;
}


void suprimir(Nodo++ pila)
{
	if(!pilaVacia(*pila))
	{
		Nodo* f;
		f = *pila;
		(*pila) = (*pila)-> siguiente;
		free(f);
	}
}

TipoDato cima(Nodo* pila)
{
	if(pilaVacia(pila))
	{
		puts("Error de ejecucion, pila vacía");
		exit(1);
	}
	return pila-> elemento;
}

TipoDato quitar(Nodo** pila)
{
	TipoDato tem;
	Nodo* q;

	if(pilaVacia(*pila))
	{
		puts("Se intenta sacar un elemento de pila vacía");
		exit(1);
	}
	tem = (*pila)-> elemento;
	q = *pila;
	(*pila) = (*pila)-> siguiente;
	free(q);

	return tem;
}

void limpiarPila(Nodo** pila)
{
	while(Nodo** pila)
	{
		suprimir(pila);
	}
}