#include <iostream>
#include <fstream>

using namespace std;

float BuscaPrecio(string nombreFichero, string codigo)
{
    ifstream fich;
    string codigoproducto;
    float precioproducto;
    bool encontrado = false;

    fich.open(nombreFichero);
    while(!encontrado && !fich.eof())
    {
        fich >> codigoproducto;
        fich >> precioproducto;
        if(codigoproducto == codigo) encontrado = true;
    }
    fich.close();

    if(encontrado) return precioproducto;
    else return -1;
}

int main()
{
    float precio;
    precio = BuscaPrecio("productos.txt", "jfjkdsh");
    cout << "El precio es: " << precio << endl;
    return 0;
}
