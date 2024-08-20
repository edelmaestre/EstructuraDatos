#include <stdlib.h>


typedef struct nodo
{
	TipoDato elemento;
	struct nodo* siguiente;
} Nodo;

void crearPila(Nodo** pila);
void insertar(Nodo** pila, TipoDato elemento);
void suprimir(Nodo** pila);
TipoDato quitar(Nodo** pila);
void limpiarPila(Nodo** pila);
/* operacion de acceso a pila*/
TipoDato cima(Nodo* pila);
/*verificacion de estado de pila*/
int pilaVacia(Nodo* pila);
