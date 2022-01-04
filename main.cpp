#include <iostream>

using namespace std;

int main()
{
    char inTexto[50];
    int con=0;
    cout << "Ingrese un texto a modificar:" << endl;
    cin >> inTexto[con];
    while(inTexto!="." || con<50){
        con++;
        cout << "Ingrese un texto a modificar:" << endl;
        cin >> inTexto[con];
    }




    return 0;
}
