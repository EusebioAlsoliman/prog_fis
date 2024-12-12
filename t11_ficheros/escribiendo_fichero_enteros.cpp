#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fichero;
    fichero.open("enteros.txt");

    int a=1;
    do{
        cout << "Escriba un número (0 para salir)" << endl;
        cin >> a;
        cout << "El dato introducido es: " << a << endl;
        fichero << a << endl;
    } while (a != 0);

    fichero.close();

    return 0;
}
