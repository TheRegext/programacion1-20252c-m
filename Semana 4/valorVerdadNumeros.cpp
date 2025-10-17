///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;

int main(){
    int num=0, var, vueltas;
    ///for(valor_inicial;comparacion;incremento)

    cout<<"INGRESAR LA CANTIDAD DE VECES QUE SE NECESITA SE REPITAN LAS INSTRUCCIONES ";
    cin>>vueltas;
    for(var=1;var<=vueltas;var++){
        cout<<"INGRESAR UN NUMERO ";
        cin>>num;
        if(num){
            cout<<"EL VALOR DE VERDAD DE num ES TRUE"<<endl;
        }
        else{
            cout<<"EL VALOR DE VERDAD DE num ES FALSE"<<endl;
        }
        system("pause");
        system("cls");

    }
	return 0;

}
