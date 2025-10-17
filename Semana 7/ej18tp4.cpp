///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;

int main(){
    ///entrada
    int sucursal, dia, cantidad, formaPago;
    float importe;

    ///control del ciclo
    int sucursalAnterior;
    ///punto c
    float recauda1, recauda2, recauda3;
    float porcentaje3, porcentaje2, porcentaje1;
    cout<<"INGRESAR SUCURSAL ";
    cin>>sucursal;
    while(sucursal!=0){
        recauda1=recauda2=recauda3=0;

        sucursalAnterior=sucursal;
        while(sucursal==sucursalAnterior){
            cout<<"INGRESAR EL DIA ";
            cin>>dia;
            cout<<"INGRESAR LA CANTIDAD ";
            cin>>cantidad;
            cout<<"IMPORTE ";
            cin>>importe;
            cout<<"FORMA DE PAGO ";
            cin>>formaPago;
            ///punto c
            switch(formaPago){
                case 1: recauda1+=importe;
                        break;
                case 2: recauda2+=importe;
                        break;
                case 3: recauda3+=importe;
                        break;

            }


            cout<<"INGRESAR SUCURSAL ";
            cin>>sucursal;
        }
        cout<<"PARA LA SUCURSAL "<<sucursalAnterior<<endl;
        porcentaje1=recauda1/(recauda1+recauda2+recauda3)*100;
        cout<<"PORCENTAJE RECAUDACION DEBITO "<<porcentaje1<<endl;
        porcentaje2=recauda2/(recauda1+recauda2+recauda3)*100;
        cout<<"PORCENTAJE RECAUDACION CREDITO "<<porcentaje2<<endl;
        porcentaje3=recauda3/(recauda1+recauda2+recauda3)*100;
        cout<<"PORCENTAJE RECAUDACION CONTADO "<<porcentaje3<<endl;
        system("pause");
        system("cls");
    }


	system("pause");
	return 0;

}
