///Fecha:
///Autor:
///Comentario:

#include <iostream>

///Hacer una función que sume 2 números.
///La función debe devolver true si ambos números son positivos;
///caso contrario debe devolver false.
///

using namespace std;

void cambiarValor(int &x);

bool sumarPositivos(int n1, int n2, int &resultado);
///REFERENCIA: ES UN ALIAS DE UNA VARIABLE, ES DECIR, LA MISMA VARIABLE
///CON OTRO NOMBRE
void cartel(bool estado);

int main(){
    int num1, num2, suma;
    cout<<"INGRESAR UN NUMERO ";
    cin>>num1;
    cout<<"INGRESAR UN NUMERO ";
    cin>>num2;
    bool quePaso=sumarPositivos(num1, num2, suma);
    if(quePaso==true){
        cout<<"SUMA "<<suma<<endl;
    }


	system("pause");
	return 0;

}

void cambiarValor(int &x){
    x=14;
}
/*
bool sumarPositivos(int n1, int n2, int &resultado){
    if(n1<=0 || n2 <=0){
        resultado=0;
        return false;
    }
    resultado=n1+n2;
    return true;

}
*/
bool sumarPositivos(int n1, int n2, int &resultado){
    bool valor;
    if(n1>0 && n2>0 ){
        resultado=n1+n2;
        valor=true;
    }
    else{
        resultado=0;
        valor=false;
    }

    cartel(valor);
    return valor;

}

void cartel(bool estado){
    if(estado){
        cout<<"SUMA REALIZADA"<<endl;

    }
    else{
        cout<<"SOLO SE PUEDEN SUMAR POSITIVOS"<<endl;
    }
}
