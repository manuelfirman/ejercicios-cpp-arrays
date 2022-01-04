#include <iostream>

using namespace std;

/*
Una empresa comercializa 15 tipos de artículos y por cada venta realizada 
genera un registro con los siguientes datos:
• Número de artículo (1 a 15).
• Cantidad vendida.
Puede haber varios registros para el mismo artículo y el último se indica 
número de artículo igual a cero.
Se pide determinar e informar:
a. El número de artículo que más se vendió en total.
b. Los números de artículos que no registraron ventas.
c. La cantidad de unidades vendidas para el artículo número 10.
Nota: tener en cuenta el concepto de “registro” y el planteo de estructura 
principal separado de consignas (ver videos de ciclos combinados y ejercicios 
resueltos de ciclos combinados)
*/

int main()
{
    //VARIABLES
    int acuVentas[15], nArticulo=0, cantVendida=0;
    //INICIALIZACION DEL VECTOR
    for(int x=0; x<15;x++){
        acuVentas[x]=0;
    }
    //PEDIDO DE DATOS
    cout << "Ingrese el numero de articulo (1 a 15): "; cin >> nArticulo;
    //WHILE ACUMULADOR DE VENTAS
    while(nArticulo!=0){
        cout << "Ingrese la cantidad vendida: "; cin >> cantVendida;
        //ACUMULACION CANTIDAD VENDIDA POR ARTICULO
        acuVentas[nArticulo-1] += cantVendida;
        //PEDIDO DE DATOS DENTRO DEL WHILE
        cout << "Ingrese el numero de articulo (1 a 15): "; cin >> nArticulo;
    }
    //FOR ARTICULOS SIN VENTAS
    cout << "Los articulos que no contabilizaron ventas son:" << endl;
    for(int x=0; x<15; x++){
        if(acuVentas[x]==0){
            cout << "Articulo " << x+ 1 << endl;
        }
    }
    //FOR ARTICULO CON MAS VENTAS
    int artMax=acuVentas[0], art=1;
    for(int x=0; x<15; x++){
        if(acuVentas[x]>artMax){
            artMax=acuVentas[x];
            art=x+1;
        }
    }
    cout << "El articulo con mas ventas registradas es el N " << art << " con " << artMax << " ventas." << endl;

    //VENTAS DEL ARTICULO 10
    cout << "La cantidad de ventas del articulo 10 es: " << acuVentas[9] << endl;
    return 0;
}
