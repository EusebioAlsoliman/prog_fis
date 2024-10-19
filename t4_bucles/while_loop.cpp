#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(1252); //1252 es el código para mostrar castellano

    int contador=0;
    int suma = 0;
    int num;
    cout << "Introduzca un número (0 para acabar): ";
    cin >> num;
    while(num!=0)
    {
        suma = suma + num;
        contador++;
        cout << "Introduzca un número (0 para acabar): ";
        cin >> num;
    }

    if(contador>0) cout << "Resultado: " << 1.0*suma/contador;

    return 0;
}
