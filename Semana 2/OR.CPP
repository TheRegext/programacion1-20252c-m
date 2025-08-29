///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;

int main(){
    int edad;
    cout<<"INGRESAR EDAD ";
    cin>>edad;
    if(edad<=12 && edad>=65){
        cout<<"LA ENTRADA ES GRATIS ";
    }
    else{
        cout<<"LA ENTRADA SALE $ 10000";
    }
    cout<<endl;

	system("pause");
	return 0;

}
