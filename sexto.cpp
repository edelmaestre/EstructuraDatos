/*Escriba una solución al problema consistente en RETIRAR de una Lista Enlazada Simple
 cuya cabeza es cab1, todos aquellos elementos que se encuentren en OTRA lista cuya cabeza es cab2.
Considere que ambas listas contienen únicamente datos numéricos enteros en cada nodo..*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct lista1
{
    int num;
    lista1 *sig;
};
lista1 *p1, *q1, *r1, *cab1;

struct lista2
{
    int num;
    lista2 *sig;
};
lista2 *p2, *q2, *r2, *cab2;

void InicializarLista1();
void InicializarLista2();
void InformacionLista1();
void InformacionLista2();
void eliminarElementosListas();

int main() {

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
        cout << "5: Eliminar Elementos Listas" << endl;
        cout << "6: Salir" << endl;
        cout << "Digite una opcion: "; cin >> op;
        switch (op) {
        case 1: InicializarLista1(); break;
        case 2: InicializarLista2(); break;
        case 3: InformacionLista1(); break;
        case 4: InformacionLista2(); break;
        case 5: eliminarElementosListas(); break;
        case 6: exit(0); break;
        default: break;
        }
    } while (continuar == true);
    return 0;
    return 0;
}

void InformacionLista1() {
    int op = 0;
    system("cls");
    cout << "Informe lista1 " << endl << endl;
    if (cab1 == NULL)
    {
        cout << "Lista Vacia nada que mostrar \a\a" << endl << endl;
    } else {

        q1 = cab1;
        cout << "___________________________________________________________________________________________" << endl;
        while (q1 != NULL) {
            cout << "Numero: " << q1->num << endl;
            cout << "___________________________________________________________________________________________" << endl;
            q1 = q1->sig;
        }
    }

    system("pause");
}

void InformacionLista2() {
    int op = 0;
    system("cls");
    cout << "Informe lista1 " << endl << endl;
    if (cab2 == NULL)
    {
        cout << "Lista Vacia nada que mostrar \a\a" << endl << endl;
    } else {

        q2 = cab2;
        cout << "___________________________________________________________________________________________" << endl;
        while (q2 != NULL) {
            cout << "Numero: " << q2->num << endl;
            cout << "___________________________________________________________________________________________" << endl;
            q2 = q2->sig;
        }
    }

    system("pause");
}

void InicializarLista1() {
    char seg = 'n';
    do {
        system("cls");
        p1 = new(lista1);
        if (p1 == NULL)
        {
            cout << "no hay memoria disponible";
        } else {
            cout << "Registrar Elementos lista 1" << endl << endl;
            cout << endl;
            cout << "Registrar numero: "; cin >> p1->num;;
            cout << endl;
            cout << endl;
            cout << endl;
            p1->sig = NULL;
            if (cab1 == NULL)
            {
                cab1 = p1;
            } else {
                q1 = cab1;
                while (q1->sig != NULL) {
                    q1 = q1->sig;
                }
                q1->sig = p1;
            }
        }

        cout << "Deseas agregar otra información? [s/n]"; cin >> seg;
    } while (seg == 's');
}

void InicializarLista2() {
    char seg = 'n';
    do {
        system("cls");
        p2 = new(lista2);
        if (p2 == NULL)
        {
            cout << "no hay memoria disponible";
        } else {
            cout << "Registrar Elementos lista 1" << endl << endl;
            cout << endl;
            cout << "Registrar numero: "; cin >> p2->num;;
            cout << endl;
            cout << endl;
            cout << endl;
            p2->sig = NULL;
            if (cab2 == NULL)
            {
                cab2 = p2;
            } else {
                q2 = cab2;
                while (q2->sig != NULL) {
                    q2 = q2->sig;
                }
                q2->sig = p2;
            }
        }

        cout << "Deseas agregar otra información? [s/n]"; cin >> seg;
    } while (seg == 's');

}

void eliminarElementosListas() {

    q2 = cab2;
    char encontro='n';
    while ( (q2->sig != NULL) && (encontro=='n') ) {
        q1 = cab1;
        while ((q1->sig != NULL) && (encontro=='n') ){
            if (q1->num == q2 ->num) {
            	encontro='s';
                if (q1 == cab1)
                {
                    cab1 = q1->sig;
                    delete(q1);
                    
                    
                } else {
                    r1 = cab1;
                    while (r1->sig != q1) {
                        r1 = r1->sig;
                    }
                    r1->sig = q1->sig;
                    delete(q1);
                     q1 = r1;
                }
                
               
            }
        }
       // q2 = q2->num;
    }
  
}
