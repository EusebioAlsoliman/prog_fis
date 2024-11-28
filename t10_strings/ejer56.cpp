#include <iostream>
#include <string>

using namespace std;

void EliminarEspaciosBlanco(string& cad)
{
    while(cad[0]==' ')
        cad.erase(0, 1);

    return;
}

int main()
{
    string cad = "   Eusebio";
    EliminarEspaciosBlanco(cad);

    cout << cad;
    return 0;
}
