#include <iostream>
using namespace std;
 
int main()
{
   for( int x=2; x<100; x++ ) //Recorro el arreglo
   {
     int add = 0;
 
     for( int z=1; z<=x; z++ ) // for para probar cada numero del arreglo es primo
     {
       if(x%z==0)add++;  // si el residuo es 0, contador add cuenta.
     }
 
     if(add==2)  // si el contador es igual a 2, el #del arreglo es primo.
     {
        cout << x << " "; //asigno el #primo al array. imprimo
     }
   }
    cin.get();cin.get();
    return 0;
}
