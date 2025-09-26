#include <iostream>
using namespace std;

/***
/// IMPLEMENTACION DE LA FUNCION
TIPO_RETORNO IDENTIFICADOR (PARAMETROS){
CUERPO
}

TIPO_RETORNO: Es el tipo de dato del resultado 
del llamado a esta funcion
En caso de no tener resultado, va void

IDENTIFICADOR: Es el nombre de la funcion, es por la cual
vamos a llamar a esta funcion

PARAMETROS: un lista de variables donde pueden 
enviarle datos. son los datos necesarios
para funcionar (Datos de entrada)

CURPO: son las instrucciones que va a realizar 
esa funcion

//// LLAMADO o INVOCACION de la funcion

IDENTIFADOR(ARGUMENTOS)

ARGUMENTOS: son los valores que van a tener los parametros

*/

/**
1- Reutilizacion
2- Mantenimiento
3- Legibilidad
4- Delegar responsabilidades (tareas)
Escalabilidad 
Modularizacion 

*/

/// DELCARACION - PROTOTIPO
void holamundo();
void linea();
void saludar(string nombre);
void mostrarSuma(int num1, int num2);
int pedirNumero();
int sumar(int n, int m);

int main() {
   
   linea();
   holamundo();/// llamado o invocado
   linea();
   holamundo();
   linea();
   holamundo();
   linea();
   
   
   saludar("Brian");
   saludar("Lucas");
   saludar("Maria");
   saludar("Andy");
   
   
   mostrarSuma(2,5);
   int num1, num2;
   
   num1 = pedirNumero();
   num2 = pedirNumero();
   
   mostrarSuma(num1, num2);
   
   int resultado = sumar(2,10);
   cout << resultado << endl;
   return 0;
}


/// DEFINICION - IMPLEMENTACION

/// no hay resultado (no retorna) y no tiene parametros
void holamundo(){
   cout << "Hola Mundo! soy una funcion!" << endl;
}
   
void linea(){
   cout << "******************************" << endl;
}
      
/// no devuelve nada pero recibe parametros
void saludar(string nombre){
   cout << "Hola "<<nombre<<"!" << endl;
}
         
void mostrarSuma(int num1, int num2){
   cout << num1 << " + " << num2 << " = " << sumar(num1, num2) << endl;
}
   
/// devuelve algo pero no recibe parametros

int pedirNumero(){
   int num;
   cout << "Ingrese numero: ";
   cin >> num;
   
   return num;
}
               
/// devuelve algo y recibe parametros
int sumar(int n, int m){
   return n + m;
}
   
                  
