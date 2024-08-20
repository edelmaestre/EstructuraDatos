#include "postfija.h"
#include <ctype.h>

/* En esta función se lee la expresión  en notación infija.
La expresión  se lee hasta el fin de línea, caracter \n. La
expresión  en postfija es almacenada  en el vector expsion.
Además n es el número de elementos de la expresion. 
*/

void postFija(Elemento expsion[N], int* n)
{
	Nodo* pila;
	char ch, it;
	int desapila, j;
	
	ch = ' '; j = -1;
	crearPila(&pila);
	
	while (ch != '\n')
	{
		do{
			scanf("%c", &ch);
			ch = toupper(ch);
		}while(!valido(ch));
		
		if(operando(ch)) /*Pasa directamente a la expresion*/
		{
			expsion[++j].oprdor = 0;
			expsion[j].c = ch;
		}
		else if(ch != '\n')    //es un operador
		{
			if(ch != ')')
			{
				desapila = 1;
				
				while(desapila)
				{
					if(pilaVacia(pila) || (prdadFuera(ch)  >  prdadDentro(cima(pila))))
					{
						insertar(&pila, ch);
						desapila = 0;
					}
					else if (prdadFuera(ch) <  prdadDentro(cima(pila)))
					{
						it = quitar(&pila);
						expsion[++j].c = it;
						expsion[j].oprdor = 1;
					}
				}
			}
			else
			{
				it = quitar(&pila);
				do{
					expsion[++j].c = it;
					expsion[j].oprdor = 1;
					it = quitar(&pila);
				}while(it != '(');
			}
		}
	}
	
	/*Una vez que se termina la entrada se vuelcan los operadores que quedan
	en la pila y se pasan a la expresión*/
	
	while(!pilaVacia(pila))
	{
		it = quitar(&pila);
		expsion[++j].c = it;
		expsion[j].oprdor = 1;
	}
	*n = j+1; /*Numero de elementos de la expresión*/
}

int prdadDentro(TipoDato op)
{
	int pdp;
	switch (op)
	{
		case '^': pdp = 3;
			break;
		case '*': case '/':
			pdp = 2 ;
			break;
		case '+': case '-':
			pdp = 1;
			break;
		case '(': pdp = 0;
		 
	}
	return pdp;
}

/* Prioridad del operador en la expresion infija*/

int prdadFuera(TipoDato op)
{
	int pfp;
	switch (op)
	{
		case '^':   pfp = 4;
					break;
		case '*': case '/':
					pfp = 2;
					break;
		case '+': case '-':
					pfp = 1;
					break;
		case '(': pfp = 5;
	}
	return pfp;
}

int valido(TipoDato c)
{
	return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c == '^' || c == '/' || c == '*' || c == '+' || c== '-' || c== '\n');
}

int operando(TipoDato c)
{
	return (c >= 'A' && c<= 'Z');
}
