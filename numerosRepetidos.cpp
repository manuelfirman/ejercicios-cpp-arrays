#include <iostream>

using namespace std;

/* CONSIGNA
 Dada una lista de 10 números, cargarlos en un vector. Luego detectar si en el 
vector hay algún elemento repetido. De haberlo, indicarlo con un cartel 
aclaratorio “Hay repetidos”, de lo contrario indicar “No hay repetidos”
*/


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
