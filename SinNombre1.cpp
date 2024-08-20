 
#include <iostream>
using namespace std;
 
int main()
{
   for( int x=2; x<100; x++ ) //Recorro el arreglo
   {
     bool primo = true;
 
     int max = x/2;
     for( int z=2; z<=max; z++ )
     {
       if(x%z==0) // Si es divisor, no es primo.
       {
         primo = false;
         break;
       }
     }
 
     if(primo) // Si es primo, lo saco por pantalla.
     {
        cout << x << " ";
     }
   }
    cin.get();cin.get();
    return 0;
}
