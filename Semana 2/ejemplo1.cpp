///Fecha: 22-08-2025
///Autor:DEK
///Comentario:primer ejemplo de c�digo

#include <iostream>

using namespace std;

///TIPOS DE DATOS (primitivos) EN C++
///int es para almacenar valores enteros
///float es para n�meros con coma
///char para UN CARACTER
///string para almacenar palabras (conjunto de caracteres)
///bool tiene uno de dos valores posibles: verdadero y false

///REGLA PARA LOS NOMBRES DE VARIABLES
///Tienen que empezar con una letra o un _
///No pueden contener espacios
///No se pueden usar las letras del castellano (�, �, etc)
///Por lo general se usan min�sculas
///C distingue entre may�sculas y min�sculas
///Reglas de estilo: en general se usan min�sculas para las variables
///int primerNumero, segundo_numero

int main(void){
    int n1, n2, suma;
    const int IVA=21;
    cout<<"INGRESAR NUMERO ";
    cin>>n1;
    cout<<"INGRESAR NUMERO ";
    cin>>n2;
    suma=n1-n2;
    cout<<"RESULTADO ";
    cout<<suma<<endl;
	system("pause");
	return 0;
}
