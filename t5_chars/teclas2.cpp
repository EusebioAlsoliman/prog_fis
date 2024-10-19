#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(1252); //1252 es el c�digo para mostrar castellano

    char tecla = 'B';
    char tecla_siguiente = tecla + 1;

    cout << "El car�cter introducido es: " << tecla << endl;
    cout << "El car�cter anterior es: " << (char)(tecla - 1) << endl; 
    cout << "El car�cter siguiente es: " << tecla_siguiente << endl; // No se muestra bien el resultado pues hay que realizar un casting

    cout << "Pulse una tecla: ";
    cin.get(tecla);

    cout << "La nueva tecla es: " << tecla << endl;

    return 0;
}
