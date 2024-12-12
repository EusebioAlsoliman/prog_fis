#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fichero;
    fichero.open("enteros.txt");

    if(!fichero.is_open())
        cout << "ERROR: Ha habido un error en la lectura del fichero o bien este no existe" << endl;
    else {
        int num;

        while(!fichero.eof())
        {
            fichero >> num;
            cout << num << endl;
        }

        fichero.close();
    }

    return 0;
}
