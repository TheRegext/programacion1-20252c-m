#include <iostream>

using namespace std;

int main(){
    int numero;
    
    cout << "Ingrese numero positivo: ";
    cin >> numero;
    
    while(numero <= 0){
      cout <<"Dije que sea positivo: ";
      cin >> numero;
    }
    
    cout << "Gracias por ingresar un numero positivo :) == " << numero << endl;
    return 0;
}
