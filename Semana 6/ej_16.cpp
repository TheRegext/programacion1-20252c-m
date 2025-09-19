#include <iostream>
using namespace std;

/***
Una empresa registr� las ventas que efectu� durante 
un d�a y para cada venta registr� los siguientes datos:

N�mero de Art�culo Vendido (1 a 30)
Cantidad de Unidades Vendidas
Importe de la Venta

El lote finaliza cuando se ingresa un registro 
con N�mero de Art�culo igual a 0. 
En el lote anterior no aparecen registros 
de los art�culos que por alguna raz�n no se 
hayan vendido durante el d�a. 
Los registros est�n agrupados por n�mero de art�culo. 

Se pide determinar e informar:
a- La recaudaci�n total para cada uno de los art�culos vendidos.
b- El n�mero de art�culo con mayor cantidad TOTAL de unidades vendidas.

*/

int main() {
   int numArticulo, cantidad;
   float importe;
   
   int numArticuloActual;
   
   float a_recaudacion;
   int b_cantidad, b_max=-1, b_maxArt;
   
   cout << "Ingrese numero de articulo: ";
   cin >> numArticulo;
   
   while(numArticulo != 0){
      
      numArticuloActual = numArticulo;
      a_recaudacion = 0;
      b_cantidad = 0;
      
      while(numArticuloActual == numArticulo){
         cout << "Ingrese cantidad vendida: ";
         cin >> cantidad;
         cout << "Ingrese monto: ";
         cin >> importe;
         
         a_recaudacion += importe; /// Syntactic sugar
         b_cantidad += cantidad;
         
         cout << "Ingrese numero de articulo: ";
         cin >> numArticulo;
      }
      
      if(b_cantidad > b_max){
         b_max = b_cantidad;
         b_maxArt = numArticuloActual;
      }
      
      cout << "La recaudacion del articulo #"<<numArticuloActual;
      cout << " es: " << a_recaudacion << endl;
   }
   
   cout << "El articulo con mayor cantidad de ventas es: " << b_maxArt << endl;
	
	return 0;
}

