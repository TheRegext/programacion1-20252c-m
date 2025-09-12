#include <iostream>
using namespace std;
/***
   Hacer un programa que dado una lista de numeros enteros
   que finaliza cuando se ingrse el tercer numero par

   Calcular:
      1- El mayor y el que le sigue!

   /// avergiruar si hay muchos registros que ingresar
      Un registro es un conjunto de datos que significan algo

10
8
11
14


**/

int main() {
   int numero, cantidadPares;
   cantidadPares = 0;
   int mayor, mayor2, cantidadMayores;

   cantidadMayores = 0;
   do
   {
      cout << "Ingrese numero: ";
      cin >> numero;
      
      /// proceso
      /// algoritmo de buesqueda mayor
            
      if(cantidadMayores == 0 || numero >= mayor){
         if(mayor != numero){
            cantidadMayores++;
            mayor2 = mayor;    
            mayor = numero; 
         }
      }
      else{
         if(cantidadMayores == 1 || numero > mayor2){
            cantidadMayores++;
            mayor2 = numero; 
         }
      }
      
      /// criterio de corte
      if(numero % 2 == 0){
         cantidadPares++;   
      }

   }while(cantidadPares < 3);
	
   
   cout << "El primer mayor es: " << mayor << endl;
   
   if(cantidadMayores != 1){
      cout << "El segundo mayor es: " << mayor2 << endl;   
   }
   else{
      cout << "No se ingreso otro numero diferente" << endl;
   }
   
	return 0;
}

