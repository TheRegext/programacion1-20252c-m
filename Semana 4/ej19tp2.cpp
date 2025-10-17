///Fecha:
///Autor:
///Comentario:

#include <iostream>

using namespace std;

int main(){
    char tipoLenguaje;///variables char: almacenan 1 caracter
    int cantidadHoras;
    bool esUrgente;///variables bool: almacenan 1 de dos posibles valores: verdadero (true 1) o falso (false 0)
    float costoTotal, valorHora=0;
    cout<<"INGRESAR EL TIPO DE LENGUAJE ";
    cin>>tipoLenguaje;
    cout<<"INGRESAR LA CANTIDAD DE HORAS ";
    cin>>cantidadHoras;
    cout<<"ES URGENTE EL PROYECTO? 1: SI; 0: NO ";
    cin>>esUrgente;
    switch(tipoLenguaje){
        case 'C':   valorHora=7500;
                    break;
        case '#':   valorHora=6100;
                    break;
        case 'P':   valorHora=5400;
                    break;
        case 'G':   valorHora=5000;
                    break;
        default:    cout<<endl<<"EL INGRESO ES INCORRECTO. NO CORRESPONDE A UN LENGUAJE "<<endl;
                    break;
    }
    if(valorHora!=0){
        costoTotal=valorHora*cantidadHoras;
        ///if(esUrgente==true)
        if(esUrgente){
            costoTotal*=2.2;
            ///costoTotal=costoTotal*2.2;
        }
        cout<<"EL COSTO TOTAL DEL PROYECTO ES $ "<< costoTotal<<endl;
    }
	system("pause");
	return 0;

}
