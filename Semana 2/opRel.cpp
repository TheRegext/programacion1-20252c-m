///Fecha:
///Autor:
///Comentario:

#include <iostream>
///Hacer un programa para ingresar 3 números y listar el máximo


using namespace std;

int main(){
    int n1, n2, n3;
    int maximo;
    cout<<"INGRESAR NUMERO ";
    cin>>n1;
    cout<<"INGRESAR NUMERO ";
    cin>>n2;
    cout<<"INGRESAR NUMERO ";
    cin>>n3;
    if(n1>n2 && n1>n3){
        maximo=n1;
    }
    else{
        if(n2>n3){
            maximo=n2;
        }
        else{
            maximo=n3;
        }
    }

    cout<<"MAXIMO "<<maximo<<endl;

	system("pause");
	return 0;

}
