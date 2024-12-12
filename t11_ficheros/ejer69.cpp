#include <iostream>
#include <fstream>

using namespace std;

void LeerMatriz_desde_fichero(string nombrefich, double m[][100], int &fil, int &col)
{
    ifstream f1;
    int i, j;

    f1.open(nombrefich);
    if (f1.is_open())
    {
        // Leer Encabezado
        f1 >> fil;
        f1 >> col;

        for (i = 0; i < fil; i++)
        {
            for (j = 0; j < col; j++)
            {
                f1 >> m[i][j];
            }
        }
        f1.close();
    }
    else
    {
        cout << "Error en la lectura del fichero." << endl;
    }

    return;
}

void RellenaMatriz(double m[][100], int fil, int col)
{
    int i, j;

    for (i = 0; i < fil; i++)
        for (j = 0; j < col; j++)
        {
            cout << "Elemento " << i << "," << j << ": ";
            cin >> m[i][j];
        }
    return;
}

void MostrarMatriz(double m[][100], int fil, int col)
{
    int i, j;

    for(i=0; i < fil; i++)
        for(j=0; j < col; j++)
            cout << "Elemento " << i << "," << j << ": " << m[i][j] << endl;
}

int main()
{
    int filas, columnas;
    double matriz[100][100];
    LeerMatriz_desde_fichero("ejer68.txt", matriz, filas, columnas);
    MostrarMatriz(matriz, filas, columnas);
    return 0;
}
