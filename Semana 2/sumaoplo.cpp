///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;
///Dados 3 números informar cuántos son positivos
int main(){

    int n1, n2, n3, valor;
    cout<<"INGRESAR NUMERO ";
    cin>>n1;
    cout<<"INGRESAR NUMERO ";
    cin>>n2;
    cout<<"INGRESAR NUMERO ";
    cin>>n3;

    valor=(n1>0)+(n2>0)+(n3>0);

    cout<<"CANTIDAD DE POSITIVOS "<<valor<<endl;


	system("pause");
	return 0;

}
