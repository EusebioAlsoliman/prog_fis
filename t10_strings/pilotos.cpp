#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void RellenarNombres(string nombre[], int num)
{
    int i;

    for (i = 0; i < num; i++)
    {
        cout << "Nombre num " << i + 1 << ": ";
        getline(cin, nombre[i]);
    }
    return;
}

void MostrarNombres(string nombres[], int num)
{
    int i;

    for (i = 0; i < num; i++)
    {
        cout << "Nombre " << i + 1 << ": " << nombres[i];
        cout << endl;
    }
    return;
}

void SoloConApellido(string nombre[], int num, string apel)
{
    int i;

    for (i = 0; i < num; i++)
        if (nombre[i].find(apel) != -1)
        {
            cout << "Num " << i + 1 << ": " << nombre[i];
            cout << endl;
        }
    return;
}

int main()
{
    string lista[5];
    int n = 5;

    lista[0] = "Fernando Alonso";
    lista[1] = "Carlos Sainz";
    lista[2] = "Max Verstappen";
    lista[3] = "Lewis Hamilton";
    lista[4] = "Charles Leclerc";

    SoloConApellido(lista, n, "Perez");
    return 0;
}
