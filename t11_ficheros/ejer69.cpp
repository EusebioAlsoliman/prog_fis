#include <iostream>
#include <fstream>

using namespace std;

void LeerMatriz_desde_fichero(string nombrefich, double m[][100], int& fil, int& col)
{
    ifstream f1;
    int i, j;

    f1.open(nombrefich);
    if(f1.is_open()){
        // Leer Encabezado
        f1 >> fil;
        f1 >> col;

        for(i=0; i<fil; i++)
        {
            for(j=0; j<col; j++)
            {
                f1 >> m[i][j];
            }
        }
        f1.close();
    } else {
        cout << "Error en la lectura del fichero." << endl;
    }

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
    int filas, columnas;
    double matriz[100][100];
    LeerMatriz_desde_fichero("ejer68.txt", matriz, filas, columnas);
    return 0;
}
