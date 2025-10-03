#include <iostream>
#include <ctime>
#include "juego.h"
using namespace std;

/***
  adivina numero,
  Es un juego donde la computadora "piensa" un numero y vos lo tienes que adivinar
  el programa debe tener un menu con:
    1- Jugar
      Piensa un numero y vos lo intentas adivinar.
      mostrar el intento en esta jugada.
    2- Estadistica
      Muestra la cantidad total de intentos que se hicieron
    0- Salir
      Cierra el programa
*/



int main()
{
  srand(time(0));// se debe llamar 1 vez y en el main
  int intentosTotales = 0;
  int opcion;
  do
  {
    cout << "*--- MENU PRINCIPAL ---*" <<endl;
    cout << "1- Jugar" << endl;
    cout << "2- Estadistica" << endl;
    cout << "0- Salir" << endl;
    cout << "------------------------" << endl;
    cout << "Opcion: ";
    cin >> opcion;
    
    ///  % 100 => [0; N-1] 0 - 99 => 1 - 100 => sumarle 1
    switch(opcion)
    {
    case 1:
      jugar(intentosTotales);
      break;
    case 2:
      estadistica(intentosTotales);
      break;
    case 0:
      cout << "Gracias por jugar! :)" << endl;
      break;
    }
  }
  while(opcion != 0);
  return 0;
}
