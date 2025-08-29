#include <iostream>
using namespace std;

/***

  - banderas
  Son variables donde tienen valores
  fijos, conocidos y cada un otiene un significado

  estado - 1 2 3

  0 - eliminado
  1 - pendiente
  2 - procesando
  3 - terminado

  banderas de 2 estados (v f)

  foco =
  v - prendido
  f - apagado
  
  - contadores
  son variables que tienen valores y siguen una progresion fija
  
  - Siempre de debe inicializar con un valor, en general 0
    C = 0
  - operacion
    C = C + VI
    C = C + 1 => C = C - 1
    C += 1    => C -= 1
    C++       => C--
  - Generalmente debenden de una condicion
  
  - acumuladores
  son variables que tienen valores y suma una variable
  
  - Siempre de debe inicializar con un valor, en general 0
    C = 0
  - operacion
    A = A + N
    A = A + N => A = A - N
    A += N    => A -= N
  - Generalmente debenden de una condicion
*/

/**
  hacer un programa que se ingrensen 5 numeros e indique si alguno de ellos
  es par.


  for (inicializador; condicion; incrementador)

  variable de control! i
*/

int main()
{

  int numero;
  int cantidadPares = 0;
  int sumaPares = 0;

  for(int i=1; i<=5; i++ )
  {
    cout << "Ingrese numero: ";
    cin >> numero;
    
    if(numero % 2 == 0)
    {
      cantidadPares++;
      sumaPares += numero;
    }  
  }
  
  if(cantidadPares > 0){
    cout << "Hay " << cantidadPares << " cantidad de pares"<<endl;   
    cout << "y su suma es: " << sumaPares << endl;
  }
  else{
    cout << "No hay pares" << endl;  
  }
  

  return 0;
}
