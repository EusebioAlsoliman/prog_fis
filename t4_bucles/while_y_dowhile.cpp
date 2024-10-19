#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(1252); //1252 es el código para mostrar castellano

    int contador = 20;
    while(contador < 10){
        cout << "Valor con while: " << contador << endl;
        contador++;
    }

    contador = 20;
    do{
        cout << "Valor con do-while: " << contador << endl;
        contador++;
    } while(contador < 10);

    return 0;
}
