///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;

void cambiarValor(int &x);

///REFERENCIA: ES UN ALIAS DE UNA VARIABLE

int main(){
    int num=3, &refe=num;
    cout<<"VALOR DE refe "<<refe<<endl;
    system("pause");
    cambiarValor(num);
    cout<<"VALOR DE num "<<num<<endl;

	system("pause");
	return 0;

}

void cambiarValor(int &x){
    x=14;
}
