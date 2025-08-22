#include <iostream>
using namespace std;

/***
  Hacer un programa que solicite 3 numeros enteros 
  muestre el promedio de ellos.
*/

/***
  1- identificar el problema
    ingresen 3 numeros y muestre el promedio.
  2- analisis de los datos
      datos entrada
      - Datos importantes que se requieren para la solucion
        pero que no sabemos ni podemos calcularlo.
        
        numero 1 
        numero 2
        numero 3
      
      datos de salida
        - El objetivo del programa
        promedio
      
      operaciones
        - todo el proceso que hace que mis datos entrada se
          transformen en mis datos de salida
        promedio = numero1 + nuemero2 + numero3 / 3
        
    3- Estrategia
      pedir los numeros
      calular promedio
      mostrar promedio
    
    4- diagramacion...
    
    5- codificacion
*/

int main(){
    /// declaraciones de variables
    int numero1, numero2, numero3;
    float promedio;
    
    /// pedir los numeros
    cout << "Ingrese un numero: ";
    cin >> numero1;
    
    cout << "Ingrese un numero: ";
    cin >> numero2;
    
    cout << "Ingrese un numero: ";
    cin >> numero3;
    
    /// calular promedio
    /// usamos (float) para interpretar el primer operando con decimal,
    /// asi el resultado nos da con coma
    promedio = (float)(numero1 + numero2 + numero3) / 3;
    
    /// mostrar promedio
    cout << "El promedio es: " << promedio << endl;
    
    
    return 0;
}
