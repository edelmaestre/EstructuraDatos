/*Escriba una solución al problema consistente en AGREGAR nombres
 a una lista de estudiantes de tal manera que solo se admitan
 estudiantes que NO estén ya matriculados, es decir, incluidos en dicha lista.*/
#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>

using namespace std;

struct estudiante
{
  char nom[20];
  estudiante *sig;
};
estudiante *p, *q, *r, *cab;

int main(int argc, char** argv) {

  char input[20] = "";

  char encontro = 'n';
  char seguir = 'n';
// How to get a string/sentence with spaces
  cout << "Registro de estudiante\n\n";
  do
  {

    cout << "Digita el nombre del estudiante :\n>";
    p = new(estudiante);
    p->sig = NULL;
     /*fflush(stdin); gets  */ cin>>(p->nom);

    if (cab == NULL)
    {
      cab = p;
    } else {
      q = cab;
      int cont=0;
      while (q != NULL and encontro == 'n') {
        if (q->nom == p->nom)
        {
          encontro = 's';
        } else {
          q = q->sig;
        }
      }
      if (encontro == 's')
      {
        cout << "el estudiante ya esta matriculado n";
      } else {
        q = cab;
        while (q->sig != NULL) {
          q = q->sig;
        }
        q->sig = p;
      }
    }
    q = cab;
    cout << "Listado de Estudianten\n\n";
    cout << "_________________________________________________________________" << endl;
    while (q != NULL) {
      cout << "nombre: " << q->nom << endl;
      cout << "_________________________________________________________________" << endl;
      q=q->sig;
    }
    cout << "Deseas Agregar otro? [s/n]"; cin >> seguir;
  } while (seguir == 's');


  return 0;
}
