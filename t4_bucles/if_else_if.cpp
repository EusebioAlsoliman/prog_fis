#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(1252); //1252 es el c�digo para mostrar castellano

    // Declarar variables
    int a;

    // Pedir n�mero al usuario
    cout << "Introduzca un n�mero entero: ";
    cin >> a; // 4
    cout << endl;

    if (a == 4){
        cout << "El n�mero es 4" << endl;
    } else if (a >= 0) {
        cout << "El n�mero es positivo o cero" << endl;
    } else {
        cout << "El n�mero es negativo " << endl;
    }

    return 0;
}
