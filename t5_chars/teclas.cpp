#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(1252); //1252 es el código para mostrar castellano

    cout << "HOLA";

    char tecla = 7;
    cout << tecla; // Realiza sonido

    tecla = 8;
    cout << tecla << tecla << tecla << "B"; // Retrocede 3 posiciones el cursor, sustituyendo la "O" de HOLA por una "B".

    return 0;
}
