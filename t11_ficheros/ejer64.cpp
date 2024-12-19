#include <iostream>
#include <fstream>

using namespace std;

void CopiarFichero(string nforiginal, string nfdestino)
{
    ifstream foriginal;
    ofstream fdestino;
    string linea;

    foriginal.open(nforiginal);
    fdestino.open(nfdestino);
    if(foriginal.is_open())
    {
        while(!foriginal.eof())
        {
            getline(foriginal, linea);
            fdestino << linea << endl;
        }
        foriginal.close();
        fdestino.close();
    }
    else cout << "Error en la lectura del fichero original." << endl;

}

int main()
{
    CopiarFichero("alumnos.csv", "alumnos_copia.csv");
    return 0;
}
