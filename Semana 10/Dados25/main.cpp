#include <iostream>
#include <ctime>
#include "pantalla.h"
#include "jugar.h"
using namespace std;

int main()
{
  int opcion;
  srand(time(0));

  do
  {
    borrarPantalla();
    
    cout << "---- MENU PRINCIPAL ---" << endl;
    cout << "1 - Jugar (vs CPU)"<<endl;
    cout << "2 - Estad¡sticas (Historial)"<<endl;
    cout << "0 - Salir"<<endl;
    cout << "-----------" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    borrarPantalla();
    
    switch(opcion)
    {
    case 1:
      jugar();
      break;
    case 2:
      cout << "--- ESTADISTICAS --- " << endl;
      break;
    case 0:
      cout << "Gracias por utilizar mi aplicacion :) " << endl;
      break;
    }
    pausa();
  }
  while(opcion != 0);
  return 0;
}
