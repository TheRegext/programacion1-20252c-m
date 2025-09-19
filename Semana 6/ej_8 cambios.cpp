#include <iostream>
using namespace std;

/***
Hacer un programa para ingresar grupos el cual finaliza 
cuando se ingrasa cero
compuestos por números ordenados de menor a mayor. 
El final de cada grupo se detecta al ingresar un 
número menor a su anterior. 
Se debe obtener y emitir:

1 2 3 
1 2 3
1 2 3
1 2 3
1 2 3 

1


*/

int main() {
   int num;
   int ant;
   
   cout << "Ingrese numero: ";
   cin >> num;
   while(num != 0){
      do{
         /// proceso
         
         ant = num;
         cout << "Ingrese numero: ";
         cin >> num;      
      }while(num > ant && num != 0);
      cout << "Fin de ingreso..." << endl;
   }
   
   
   return 0;
}

