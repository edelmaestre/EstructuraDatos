typedef char TipoDato;
#include "pila.h"

typedef struct{
	char c;
	int oprdor;
}Elemento;

#define N 120

void postFija(Elemento expsion[N], int* n);
int prdadDentro(TipoDato op);
int prdadFuera(TipoDato op);
int valido(TipoDato c);
int operando(TipoDato c);
