#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(1252); //1252 es el código para mostrar castellano

    // Declarar variables
    int a;

    // Pedir número al usuario
    cout << "Introduzca un número entero: ";
    cin >> a; // 4
    cout << endl;

    if (a == 4){
        cout << "El número es 4" << endl;
    } else if (a >= 0) {
        cout << "El número es positivo o cero" << endl;
    } else {
        cout << "El número es negativo " << endl;
    }

    return 0;
}
