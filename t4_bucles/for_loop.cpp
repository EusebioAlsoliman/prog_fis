#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(1252); //1252 es el código para mostrar castellano

    int num;
    cout << "Introduzca 1 para continuar: ";
    cin >> num;

    while(num!=1)
    {
        cout << "Introduzca 1 para continuar: ";
        cin >> num;
    }
    return 0;
}
