#include <iostream>

using namespace std;

void ResolverEcuaciones(float a[][100], float c[], float x[], int n)
{
    int i, j;
    float numerador;

    for(i=0; i<n;i++){
        numerador = c[i];
        for(j=0;j<n;j++) numerador -= (a[i][j]*x[j]);

        x[i]=numerador/a[i][i];
    }
    return;
}

int main()
{
    

    return 0;
}

