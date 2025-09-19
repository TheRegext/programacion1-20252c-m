#include <iostream>
using namespace std;

int main() {
   int materia, legajo, nota;
   int cantidad;
   
   cout << "-- INICIO APP" << endl;
   
   cout << "Ingrese Materia: ";
   cin >> materia;
   
   while(materia != 0){
      cout << "-- INICIO de grupo" << endl;
      cantidad = 0;
      
      cout << "Ingrese Legajo: ";
      cin >> legajo;
      
      while(legajo != 0){
         cout << "Ingrese Nota: ";
         cin >> nota;
         
         if(nota >= 6){
            cantidad++;
         }

         cout << "Ingrese Legajo: ";
         cin >> legajo;
      }
      cout << "La cantida de examenes aprobados fueron: " << cantidad << endl;
      
      cout << "-- FIN de grupo" << endl;
      
      cout << "Ingrese Materia: ";
      cin >> materia;
   }
   
   cout << "-- FIN APP" << endl;
      return 0;
}



/*

12315
12323
12335
12346
44513
445210
44537
44544
2219
2226
2235
2242
33110
33210
33310
33410
*/


