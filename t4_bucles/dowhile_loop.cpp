#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(1252); //1252 es el código para mostrar castellano

    int contador = -1;
    int suma = 0;
    int num;

    do {cout << "Introduzca un número (0 para acabar): ";
        cin >> num;
        suma = suma + num;
        contador++;
    } while(num!=0);

    if(contador>0) cout << "Resultado: " << 1.0*suma/contador;

    return 0;
}
