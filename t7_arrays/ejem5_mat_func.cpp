#include <iostream>
using namespace std;

float Determinante2x2(float m[][10])
{
    float det;
    det=m[0][0]*m[1][1]-m[1][0]*m[0][1];
    return det;
}

// El máximo sigue siendo de 10 columnas, OJO.
void RellenaMatriz(float m[][10], int fil, int col)
{
    int i,j;

    for(i=0; i<fil; i++)
        for(j=0; j<col; j++)
        {
            cout << "Elemento " << i+1 << "," << j+1 << ": ";
            cin >> m[i][j];
        }
    return;
}

int main(void)
{
    float x[2][10], y[2][10];
    float det;

    RellenaMatriz(x,2,2);
    det=Determinante2x2(x);
    cout << "Determinante 'x': " << det << endl;

    RellenaMatriz(y,2,2);
    det=Determinante2x2(y);
    cout << "Determinante 'y': " << det << endl;

    return 0;
}
