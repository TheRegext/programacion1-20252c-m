///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;

int sumar(int n1, int n2);///declaración, prototipo o firma

///void cartel(void);

void otroCartel(int queImprimo);

int main(){
    int num1, num2;
    //otroCartel(1);
    //cout<<endl;
    //otroCartel(3);
    cout<<"INGRESAR NUMERO ";
    cin>>num1;
    cout<<"INGRESAR NUMERO ";
    cin>>num2;
    int suma=sumar(7,sumar(num1,num2));///llamada a la función
    cout<<"RESULTADO "<<suma<<endl;

   	system("pause");
	return 0;


}

int sumar(int n1, int n2){
    int resultado;
    resultado=n1+n2;
    return resultado;
}

void otroCartel(int valor){
    if(valor==1){
        cout<<"HOLA!";
    }
    else{
        cout<<"CHAU!";
    }
}
