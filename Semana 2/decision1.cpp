///Fecha: 22-08-2025
///Autor:DEK
///Comentario:primer ejemplo de c�digo

#include <iostream>

using namespace std;


///programa que muestra el mayor entre dos n�meros distintos ingresados

int main(void){
    int n1, n2;
    cout<<"INGRESAR NUMERO ";
    cin>>n1;
    cout<<"INGRESAR NUMERO ";
    cin>>n2;
    ///decisi�n simple: permite que el programa elija entre 2 cursos de acci�n posibles
    if(n1>n2){///parte verdadera
        cout<<"MAYOR "<<n1;
    }
    else{
        cout<<"MAYOR "<<n2;
    }
    cout<<endl;
	system("pause");
	return 0;
}
