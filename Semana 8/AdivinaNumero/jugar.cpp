#include <iostream>
#include "juego.h"
#include "aleatorios.h"

using namespace std;

void jugar(int &intentosTotales){
  int numeroSecreto = aleatorio();
  int numero;
  int intentos = 0;
  cout << "Ya pense un numero, ahora te toca adivinar! :) "<<endl;
  do{
    cout << "- Ingresa un numero: ";
    cin >> numero;
    
    if(numero > numeroSecreto){
      cout << "El numero es mas chico..."<< endl;
    }
    else if(numero < numeroSecreto){
      cout << "El numero es mas grande..." << endl;    
    }
    intentos++;
  }while(numero != numeroSecreto);
  
  cout << "Genial adivinaste el numero!" << endl;
  cout << "Intentos: " << intentos << endl; 
  
  intentosTotales += intentos;
}

void estadistica(int intentos){
  cout << "La cantidad total de intetos son: " << intentos << endl;

}
