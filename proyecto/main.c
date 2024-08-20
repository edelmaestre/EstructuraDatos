#include <stdio.h>
#include <stdlib.h>

#include "postfija.h"
typedef double TipoDatop;
#include "pilaopdos.h"
#include <stdio.h>
#include <math.h>

double evalua(Elemento expsion[N], int n, double v[]);
void valorOprdos(Elemento expsion[N], int n, double v[]);

void main()
{
	double v[26]; /*vector para los valores de los operandos */
	Elemento expsion[N];
	int i, n;
	double resultado;

	puts("\n Expresion aritmetica(en una linea) ");
	postFija(expsion, &n);
	printf("\n Expresion aritmetica en postfija: ");
	for (i = 0; i < n; i++)
		printf("%c", expsion[i].c);

	puts("\n Asignacion de valores numericos a los operandos ");
	valorOprdos(expsion, n, v);

	resultado = evalua(expsion, n, v);
	printf("\n Resultado de la evaluacion: %.21f", resultado);

}

double evalua(Elemento expsion[N], int n, double v[])
{
	double valor, a, b;
	Nodop* pila;
	char op;
	int i;

	crearPilap(&pila);

	for (i = 0; i < n; i++)
	{
		if (!expsion[i].oprdor)
		{
			int indice;
			indice = expsion[i].c - 'A';
			insertarp(&pila, v[indice]);
		}

		else if (expsion[i].oprdor)
		{
			b = quitarp(&pila);
			a = quitarp(&pila);

			switch (expsion[i].c)
			{
			case '^': valor = pow(a, b);
				break;
			case '*': valor = a * b;
				break;
			case '/': if (b != 0.0)
					valor = a / b;
				else
				{
					puts("\n Division por cero.");
					exit(1);
				}
				break;
			case '+': valor = a + b;
				break;
			case '-': valor = a - b;
			}
			insertarp(&pila, valor);
		}
	}

	return quitarp(&pila);
}

void valorOprdos(Elemento expsion[N], int n, double v[])
{
	/*Se asignan valores numericos a los operadores */
	int i;
	char ch;

	for (i = 0; i < n; i++)
	{
		if (!expsion[i].oprdor)
		{
			int indice;
			indice = expsion[i].c - 'A';
			printf("%c = ", expsion[i].c);
			scanf("%lf", &v[indice]);
		}
	}
}

