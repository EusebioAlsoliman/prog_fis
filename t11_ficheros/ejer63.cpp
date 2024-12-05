#include <iostream>
#include <fstream>

using namespace std;

void MostrarFichero(string nombrefich)
{
    ifstream fich;
    string linea;

    fich.open(nombrefich);
    if(fich.is_open())
    {
        while(!fich.eof())
        {
            getline(fich, linea);
            cout << linea << endl;
        }
        fich.close();
    }
    else cout << "Error en la lectura del fichero." << endl;

}

int main()
{
    string nombre_fichero = "datos.txt";
    MostrarFichero(nombre_fichero);
    return 0;
}
