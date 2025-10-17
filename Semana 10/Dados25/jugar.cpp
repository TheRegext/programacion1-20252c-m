#include <iostream>
#include "jugar.h"
using namespace std;

void jugar()
{
  cout << "--- JUEGO ---" << endl;

  int dados[5], puntosTirada, puntosTotales[2] = {};
  int ronda = 0;

  do{
    ronda ++;
    cout << endl;
    cout << "Ronda #"<<ronda << endl;
      
    for(int i=0; i<2; i++){
      if(i == 0){
        cout << "Turno del jugador: " << endl;      
      }
      else{
        cout << "Turno de la CPU: " << endl;      
      }
      tiradaDados(dados);
      puntosTirada = calcularPuntos(dados);
      puntosTotales[i] += puntosTirada;
    
      mostrarDados(dados);
      cout << "Puntos obtenidos: " << puntosTirada << endl;
      cout << "Puntos acumulados: " << puntosTotales[i] << endl;
    }
  }while(puntosTotales[0] < 25 && puntosTotales[1] < 25 );
  
  if(puntosTotales[0] >= 25){
    cout << "El ganador es el jugador!" << endl;  
  }
  else{
    cout << "El ganador es la CPU" << endl;  
  }
}

int tirarDado()
{
  return rand() % 6 + 1;
}

void tiradaDados(int dados[])
{
  for(int i=0; i<5; i++)
  {
    dados[i] = tirarDado();
  }
}

void mostrarDados(int dados[])
{
  cout << " [ ";
  for(int i=0; i<5; i++)
  {
    cout << dados[i] << " ";
  }
  cout << "] " << endl;
}

int calcularPuntos(int dados[])
{
  int max, min;

  max = buscarMaximo(dados, 5);
  min = buscarMinimo(dados, 5);

  return max - min;
}


int buscarMaximo(int vec[],int tam)
{
  int i;
  int valorMax=vec[0];

  for(i=1; i<tam; i++)
  {
    if(vec[i]>valorMax)
    {
      valorMax=vec[i];
    }
  }

  return valorMax;
}


int buscarMinimo(int vec[],int tam)
{
  int i;
  int valorMin=vec[0];

  for(i=1; i<tam; i++)
  {
    if(vec[i]<valorMin)
    {
      valorMin=vec[i];
    }
  }

  return valorMin;
}
