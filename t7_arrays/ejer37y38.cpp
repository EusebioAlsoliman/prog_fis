#include <iostream>
using namespace std;

void SumarMatrices(int m1[][10], int m2[][10], int r[][10], int fil, int col)
{
    int i, j;
    for(i=0;i<fil;i++)
    {
        for(j=0;j<col;j++)
        {
            r[i][j]=m1[i][j]+m2[i][j];
        }
    }
}

/* Es una función que, aunque multiplica matrices y devuelve el resultado en la matriz 'r', va a devolver también un booleano
para indicar si la multiplicación es posible realizarla o no.
Esto es porque para poder multiplicar dos matrices, el número de columnas de la primera 
debe coincidir con el número de filas de la segunda*/
bool MultiplicarMatrices(int m1[][10], int m2[][10], int r[][10], int f1, int c1, int f2, int c2)
{
    int i,j,k;
    long int suma;

    if(c1!=f2) return false;
    else
    {
        for(i=0; i<f1; i++)
        {
            for(j=0; j<c1; j++)
            {
                r[i][j]=0.0;
                for(k=0; k<f2;k++)
                {
                    r[i][j]=r[i][j]+m1[i][k]*m2[k][j];
                }
            }
        }
    }
    return true;

}

double ProdEscalar(double a[], double b[], int n)
{
    int i;
    double suma;

    suma = 0.0;
    for(i=0; i<n; i++)
        suma += a[i]*b[i];

    return suma;
}

int main(void)
{


    return 0;
}
