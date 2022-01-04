#include <iostream>

using namespace std;

int main()
{
    //DECLARACION DE VECTOR
    int inNumero[10];
    //DECLARACION CONTADORES Y VARIABLES
    int bRep=0;
    //FOR DE CARGA DE VECTOR
    for(int x=0; x<10; x++){
        cout << "Ingrese un numero: "; cin >> inNumero[x];
    }
    //CICLO COMBINADO
    for(int x=0; x<10; x++){
        int nRep=0, E=0; //Declaracion contador de repetidos
        E=inNumero[x];
        for(int y=0; y<10; y++){
            if(E==inNumero[y]){
                nRep++;
            }
        }
        if(nRep>=2){
            bRep=1;
        }
    }
    //MENSAJE SALIDA
    if(bRep==1){
        cout << "Hay numeros repetidos" << endl;
    }else{
        cout << "No hay numeros repetidos" << endl;
    }

    return 0;
}
