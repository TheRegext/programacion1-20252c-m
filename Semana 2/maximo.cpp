///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;

int main(){
    int num, maximo;

    cout<<"INGRESAR NUMERO ";
    cin>>num;
    maximo=num;
    int i;
    for(i=1;i<=4;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>num;
        if(num>maximo){
            maximo=num;
        }
    }

    cout<<"VALOR MAXIMO "<<maximo<<endl;
	system("pause");
	return 0;

}
