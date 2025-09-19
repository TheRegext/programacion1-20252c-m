#include <iostream>
using namespace std;

/***
Hacer un programa para ingresar por teclado 5 grupos 
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
   for(int i=1; i<=5; i++){
      do{
         /// proceso
         
         ant = num;
         cout << "Ingrese numero: ";
         cin >> num;      
      }while(num > ant);
      cout << "Fin de ingreso..." << endl;
   }
   
	
	return 0;
}

