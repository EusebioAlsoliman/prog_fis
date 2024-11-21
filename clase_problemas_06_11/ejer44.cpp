#include <iostream>
#include <windows.h>
#include <cmath>
#include <cstdlib>

using namespace std;

int CalcularNumeroPuntosDeSilla(double m[][10], int n)
{
    int i,j;
    int cont, posmin;
    bool EsPuntodeSilla;
    double xmin;

    cont=0;
    for(i=0; i<n; i++)
    {
       //Busco el mínimo elemento de la fila i
       posmin=0;
       xmin=m[i][0];
       for(j=1; j<n; j++)
          if(m[i][j]<xmin)
          {
              posmin=j;
              xmin=m[i][j];
          }
       //Compruebo si ese mínimo es el maximo de la columna posmin
       EsPuntodeSilla=true;
       j=0;
       while(EsPuntodeSilla && (j<n))
           if(xmin<m[j][posmin]) EsPuntodeSilla=false;
           else j++;

       if(EsPuntodeSilla) cont++;
    }
    return cont;
}

// Función que rellena una matriz
void RellenaMatriz(double m[][10], int fil, int col)
{
    int i, j;

    for(i=0; i<fil; i++)
    {
        for(j=0; j<col; j++)
        {
            // Pido los elementos por pantalla
            cout << "Introduzca el elemento (" << i+1 << "," << j+1 << "):";
            cin >> m[i][j];
        }
    }
    return;
}

int main()
{
    int fil, col, puntosSilla; // tamaño de la matriz
    SetConsoleOutputCP(1252);
    double matriz[10][10];

    // Pido el número de filas y columnas
    cout << "Introduzca el número de filas de la matriz: ";
    cin >> fil;

    cout << "Introduzca el número de columnas: ";
    cin >> col;

    // Relleno la matriz
    RellenaMatriz(matriz, fil, col);

    // Calculo el número de puntos de silla de la matriz
    puntosSilla = CalcularNumeroPuntosDeSilla(matriz, fil);

    cout << "El número de puntos de silla de la matriz es: " << puntosSilla << endl;

    system("pause");

    return 0;
}
