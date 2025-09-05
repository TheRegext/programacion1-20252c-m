#include <iostream>
using namespace std;

/***
  Una academia dispone de un curso llamado "Como ser tu propio jefe!"
  El curso dispone de cupos limitados (30 personas)
  
  Se pide hacer un programa para anotar a los estudiantes
  El programa debe finalizar cuando se cumplan todos los cupos
  Por cada inscripcion hay:
    cantidad inscripto
  mostrar la cantidad de inscripciones y si alguno quedo fuera.
*/

int main(){
    int inscriptos, inscriptosTotales;
    int cantidadInscripciones;
    
    inscriptosTotales = cantidadInscripciones = 0;
    
    do{
      
      cout << "Ingrese cantidad de inscriptos: ";
      cin >> inscriptos;
      inscriptosTotales += inscriptos;  
      cantidadInscripciones++;
      
    }while(inscriptosTotales < 30);
    
    cout << "Cantidad de inscripciones: " << cantidadInscripciones << endl;
    cout << "Cantidad de gente fuera: " << inscriptosTotales - 30 << endl;
    
    
    return 0;
}
