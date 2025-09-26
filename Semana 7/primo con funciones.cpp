#include <iostream>
using namespace std;

/// declaracion
bool esPrimo(int num);
bool esDivisible(int dividendo, int divisor);

int main() {
   int num;
  
   cout << "Ingres numero: ";
   cin >> num;
   
   if(esPrimo(num)){
      cout << "Es primo" << endl;
   }
   else{
      cout << "No es primo" << endl;
   }
   
   return 0;
}


/// implementar
bool esPrimo(int num){
   int cd;
   
   cd = 0;
   for(int i=1; i<=num; i++){
      if(esDivisible(num, i)){
         cd++;
      }
   }
   
   if(cd==2){
      return true;
   }
   else{
      return false;
   }
}
   
bool esDivisible(int dividendo, int divisor){
   if(divisor == 0){
      return false; /// corta la funcion
   }
   
   if(dividendo % divisor == 0){
      return true;
   }
   else{
      return false;
   }
}
