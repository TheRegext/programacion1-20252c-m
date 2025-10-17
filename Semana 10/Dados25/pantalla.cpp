#include <iostream>
#include "pantalla.h"
using namespace std;

void pausa(){
  cout << endl << "--- PRESIONE ALGUNA TECLA PARA CONTINUAR -- " << endl;
  system("pause>nul"); /// se queda esperando a que apretes una tecla
}

void borrarPantalla(){
  system("cls"); /// borrar la pantalla
}
