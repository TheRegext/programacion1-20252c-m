#include <iostream>
using namespace std;

/***
   se ingresan 10 numero indicar cuales son primos.
*/

int main() {
   
   int n;
   int cd;
   
   for(int i=1; i<=10; i++){
      cout << "Ingrese numero: ";
      cin >> n;

      cd = 0;
      for(int i=1; i<=n; i++){
         if(n % i == 0){
            cd++;
         }
      }
      if(cd == 2){
         cout << "Es primo" << endl;
      }
      else{
         cout << "No es primo" << endl;
      }
   }
	
	return 0;
}

