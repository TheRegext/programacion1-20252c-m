#include <iostream>

using namespace std;

int multiplicar(int numero, int mul){
  return numero * mul;
}

void mostrar(int numero){
  int doble;
  doble  = multiplicar(numero, 2);
  cout << "Numero " << numero << "\n";
  cout << "Doble " << doble << "\n";
}


void mostrar(int v[]){
  for(int i=0; i<5; i++){
    cout << v[i] << "\n";
  }
}


int main()
{
  int vec[5] = {1,4,-5,4,7};
  int cantidad = 0;
  
  for(int i=0; i<5; i++){
    if(vec[i]%2 != 0){
      cantidad++;    
    }  
  }
  
  cout << "La cantidad de impares son: " << cantidad << "\n";

  
  
  //mostrar(vec);
  
  
  
  
    /*int n;
    
    n = 10;
    
    cout << "Hola \n";
    
    mostrar(n);
    */
    system("pause");
    return 0;
}
