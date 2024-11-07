#include <iostream>

using namespace std;

int MaxProdEscalar(float v[], float m[][100], int n)
{
    int i, j, fila;
    float prodescalar, max;

    // Calcular el producto de la primera fila
    prodescalar = 0.0;
    for(j=0; j<n;j++) prodescalar += v[j]*m[0][j];
    max=prodescalar;
    fila=0;

    // Recorrer el resto de filas
    for(i=1; i<n;i++){
        prodescalar=0.0;
        for(j=0; j<n;j++) prodescalar += v[j]*m[i][j];
        if(max<prodescalar){
            max=prodescalar;
            fila=i;
        }
    }
    return fila;
}

void RellenaMatriz(float m[][100], int n)
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
    float m[3][100];
    float v[3] = {2,2,2};
    RellenaMatriz(m, 3);
    cout << "El resultado es la fila: " << MaxProdEscalar(v,m,3);

    return 0;
}

