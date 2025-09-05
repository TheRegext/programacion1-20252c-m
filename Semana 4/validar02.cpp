#include <iostream>

using namespace std;

int main(){
    int numero;
    
    cout << "Ingrese numero del 1 al 10: ";
    cin >> numero;
    
    /// while(!(numero >=1 && numero <=10)){
    while(numero < 1 || numero > 10){
      cout <<"Dije que sea del 1 al 10: ";
      cin >> numero;
    }
    
    cout << "Gracias por ingresar un numero :) == " << numero << endl;
    return 0;
}
