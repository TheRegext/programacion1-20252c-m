///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

/*condicion: todo programa debe tener una condici�n de fin.
Todo conjunto de instrucciones que se repite, tambi�n tiene un fin.
Esa condici�n es la que debe ser evaluada por el while
no necesariamente la condici�n es directa (depende de manera directa del valor de una variable que se ingresa)
*/
/// Hacer un programa que acepte un conjunto de n�meros que se ingresa y que corte el ingreso cuando aparece el segundo
///valor mayor a 100. Informar cu�l es el promedio entre los valores ingresados

int main(){
    int num, cont=0;
	bool seguir=true;

	/*while(seguir==true){
        cout<<"INGRESAR NUMERO ";
        cin>>num;
        if(num>100){
            cont++;
        }

        if(cont==2){
            seguir=false;
        }
	}*/

	while(cont<2){
        cout<<"INGRESAR NUMERO ";
        cin>>num;
        if(num>100){
            cont++;
        }
        else{
            cont=0;
        }

	}
	system("pause");
	return 0;
}
///eL PROGRAMA CORTE CUANDO SE INGRESEN 2 VALORES MAYORES A 100 CONSECUTIVOS
