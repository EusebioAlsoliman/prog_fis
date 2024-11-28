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

void MayusculaStr_porRef(string &cadena)
{
    int i;

    for (i = 0; i < cadena.length(); i++)
        if ((cadena[i] >= 'a') && (cadena[i] <= 'z'))
            cadena[i] = cadena[i] + 'A' - 'a';

    return;
}

string MayusculaStr_porValor(string cadena)
{
    int i;

    for (i = 0; i < cadena.length(); i++)
        if ((cadena[i] >= 'a') && (cadena[i] <= 'z'))
            cadena[i] = cadena[i] + 'A' - 'a';

    return cadena;
}

int main()
{
    // SetConsoleOutputCP(1252);
    string cad1;
    cout << "Inserte su nombre: ";
    // cin >> cad1;
    // getline(cin, cad1);
    cad1 = "Eusebio";
    string cad2 = "Pepe";

    cout << "Mi nombre es: " << cad1 << endl;

    cout << "eusebio < pepe?" << (cad1<cad2) << endl;

    cad1 = "Juan";
    cad2= "Lopez";
    string espacio = " ";

    string cad3= cad1 + espacio + cad2;

    cout << endl;
    cout << cad3;
    cout << endl;

    cout << "Cuántas letras tiene la palabra " << cad1 << "?" << cad1.length() << endl;

    cad1[1] = 'o';

    cout << "Juan ahora es " << cad1 << endl;

    MayusculaStr_porRef(cad1);
    cout << "Juan en mayuscula es: " << cad1 << endl;

    string lopez_mayus = MayusculaStr_porValor(cad2);
    cout << "Lopez en mayuscula es: " << lopez_mayus << endl;

    string cad_num="2425784354221  hola 2234";
    int pos = cad_num.find("adios");

    cout << pos;

    cout << "cad_num antes del erase: " << cad_num << endl;
    cad_num.erase(0, 15);
    cout << "cad_num despues del erase: " << cad_num << endl;

    string nombre_profesor = "Pepe Perez";
    nombre_profesor.insert(4, " Murillo");
    cout << "El nombre del profesor es: " << nombre_profesor << endl;

    cout << "El segundo apellido del profesor es: " << nombre_profesor.substr(13, 5) << endl;

    cout << "Pero el nombre completo del profesor sigue siendo: " << nombre_profesor << endl;

    const char* nom_prof;
    nom_prof = nombre_profesor.c_str();

    cout << nom_prof << endl;

    string top5_pilotos_f1[5];

    RellenarNombres(top5_pilotos_f1, 5);

    cout << "Los mejores pilotos de la historia de la F1 son: " << endl;

    MostrarNombres(top5_pilotos_f1, 5);


    return 0;
}
