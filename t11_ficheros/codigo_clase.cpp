#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fichero;

    // Ruta absoluta
    // fichero.open("C:\\Users\\eunai\\Documents\\datos.txt");

    // Ruta relativa
    fichero.open("datos.txt");

    int edad = 30;

    fichero << "Hola, mundo Pepe" << endl;
    fichero << "Mi nombre es Eusebio" << endl;
    fichero << "Y mi edad es: " << edad << endl;

    fichero.close();

    return 0;
}
