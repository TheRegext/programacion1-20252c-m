///Fecha:
///Autor:
///Comentario:

#include <iostream>


using namespace std;

///prototipo o declaración
/*void cargarVector(int v[], int tam);
void mostrarvector(int v[], int tam);
void poner0vector(int v[], int tam);
int buscarMaximoAbsoluto(int vec[],int tam);
int buscarMaximo(int vec[],int tam);
int buscarPosMaximo(int vec[],int tam);
void copiarVector(int vOrigen[], int vDestino[], int tam);
void ponerEnPositivo(int v[],int tam);*/
///Leer 10 números y guardarlos en un vector->cargarVector(); mostrarvector()
///Determinar e informar cuál es el valor máximo absoluto del vector. Por ejemplo 20, -43 y 5, el máximo absoluto es -43.

///desarrollo de las funciones
void cargarVector(int v[5], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"INGRESAR NUMERO ";
        cin>>v[i];
    }
}

void mostrarvector(int v[5], int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<v[i]<<endl;
    }
}

void poner0vector(int v[5], int tam){
    int i;
    for(i=0;i<tam;i++){
      v[i]=0;
    }
}

int buscarMaximo(int vec[],int tam){
    int i;
    int valorMax=vec[0];
    for(i=1;i<tam;i++){
        if(vec[i]>valorMax){
            valorMax=vec[i];
        }
    }
    return valorMax;
}

int buscarMaximoAbsoluto(int vec[],int tam){
    return 8;
}

/*int buscarPosMaximo(int vec[],int tam){
    int i;
    int valorMax=vec[0], posMax=0;
    for(i=1;i<tam;i++){
        if(vec[i]>valorMax){
            valorMax=vec[i];
            posMax=i;
        }
    }
    return posMax;

}
*/
int buscarPosMaximo(int vec[],int tam){
    int i;
    int posMax=0;
    for(i=1;i<tam;i++){
        if(vec[i]>vec[posMax]){
            posMax=i;
        }
    }
    return posMax;

}

void copiarVector(int vOrigen[], int vDestino[], int tam){
    int i;
    for(i=0;i<tam;i++){
        vDestino[i]=vOrigen[i];
    }

}

void ponerEnPositivo(int v[],int tam){
    int x;
    for(x=0;x<tam;x++){
        if(v[x]<0){
            v[x]=v[x]*(-1);
        }
    }
}


int main(){
    const int TAM=5;
    int vec[TAM], vAux[TAM];///al declarar se le tiene dar el tamalo estrictamente necesario
    cargarVector(vec, TAM);/// al usarlo la primera posición es la 0, y la última el tamaño -1
    copiarVector(vec, vAux,TAM);
    mostrarvector(vec, TAM);
    cout<<endl;
    mostrarvector(vAux,TAM);
    ponerEnPositivo(vAux,TAM);
    cout<<endl;
    mostrarvector(vAux,TAM);
    cout<<endl;
    int posicionMaximo=buscarPosMaximo(vAux, TAM);
    cout<<"MAXIMO ABSOLUTO DEL VECTOR "<<vec[posicionMaximo]<<"  QUE ESTA EN LA POSICION "<<posicionMaximo<<endl;
	system("pause");
	return 0;

}


