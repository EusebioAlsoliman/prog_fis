#include <iostream>
#include <fstream>

using namespace std;

bool CompararFicheros(string nf1, string nf2)
{
    ifstream f1;
    ifstream f2;
    string linea1, linea2;
    bool iguales = true;

    f1.open(nf1);
    f2.open(nf2);
    if(f1.is_open() && f2.is_open())
    {
        while(!f1.eof() && !f2.eof() && iguales)
        {
            getline(f1, linea1);
            getline(f2, linea2);
            if(linea1!=linea2) iguales = false;
        }
        if(f1.eof() != f2.eof()) iguales = false;

        f1.close();
        f2.close();
    }
    else{
        cout << "Error en la lectura de alguno de los ficheros." << endl;
        iguales = false;
    }

    return iguales;

}

int main()
{
    return 0;
}
