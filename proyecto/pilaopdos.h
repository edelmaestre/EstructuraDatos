#include <stdlib.h>

//typedef struct nodop;
//#include "pilaopdos.h"
//#include <stdio.h>
//#include <math.h>

double evalua(Elemento expsion[N], int n, double v[]);
void valorOprdos(Elemento expsion[N], int n, double v[]);

typedef struct nodop
{
	TipoDatop elemento;
	struct nodop* siguiente;
} Nodop;
void crearPilap(Nodop** pila);
void insertarp(Nodop** pila, TipoDatop elemento);
void suprimirp(Nodop** pila);
TipoDatop quitarp(Nodop** pila);
void limpiarPilap(Nodop** pila);
TipoDatop cimap(Nodop* pila);
int pilaVaciap(Nodop* pila);


