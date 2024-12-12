#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fichero;
    fichero.open("datos.txt");

    int edad = 30;

    fichero << edad;
    fichero.close();

    return 0;
}
