#include <iostream>
using namespace std;

int main() {
   int num, cd;
   
   cout << "Ingres numero: ";
   cin >> num;
   
   cd = 0;
   for(int i=1; i<=num; i++){
      if(num%i==0){
         cd++;
      }
   }
   
   if(cd==2){
      cout << "Es primo" << endl;
   }
   else{
      cout << "No es primo" << endl;
   }
	
	return 0;
}



