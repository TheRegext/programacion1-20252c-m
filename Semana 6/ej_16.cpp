#include <iostream>
using namespace std;

/***
Una empresa registró las ventas que efectuó durante 
un día y para cada venta registró los siguientes datos:

Número de Artículo Vendido (1 a 30)
Cantidad de Unidades Vendidas
Importe de la Venta

El lote finaliza cuando se ingresa un registro 
con Número de Artículo igual a 0. 
En el lote anterior no aparecen registros 
de los artículos que por alguna razón no se 
hayan vendido durante el día. 
Los registros están agrupados por número de artículo. 

Se pide determinar e informar:
a- La recaudación total para cada uno de los artículos vendidos.
b- El número de artículo con mayor cantidad TOTAL de unidades vendidas.

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

