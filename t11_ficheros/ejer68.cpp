#include <iostream>
#include <fstream>

using namespace std;

void GuardarMatriz_a_fichero(string nombrefich, double m[][100], int fil, int col)
{
    ofstream f1;
    int i, j;

    f1.open(nombrefich);

    // Encabezado
    f1 << fil << " " << col << endl;

    for(i=0; i<fil; i++)
    {
        for(j=0; j<col; j++)
        {
            f1 << m[i][j] << " ";
        }
        f1 << endl;
    }
    f1.close();

    return;

}

void RellenaMatriz(double m[][100], int n)
{
   int i,j;

    for(i=0;i<n;i++)
	for(j=0;j<n;j++)
    	{
	   cout << "Elemento " << i << "," << j << ": ";
	   cin >> m[i][j];
    	}
     return;
}

int main()
{
    int filas = 3, columnas = 3;
    double matriz[filas][100];
    RellenaMatriz(matriz, filas);
    GuardarMatriz_a_fichero("ejer68.txt", matriz, filas, columnas);
    return 0;
}
