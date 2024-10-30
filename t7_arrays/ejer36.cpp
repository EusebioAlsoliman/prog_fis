#include <iostream>
using namespace std;

float media(float x[], int n)
{
    int i;
    float m;

    m = 0.0;
    for(i=0 ; i<n; i++)
        m = m + x[i];
    return m/n;
}

float varianza(float x[], int n)
{
    float suma, med;
    int i;

    m = media(x, n);

    suma=0.0;
    for(i = 0; i < n; i++)
        suma += ((x[i]-m)*(x[i]-m));

    return suma/n;
}

void ejer36(double x[], double F[], int n)
{
    double media;
    int i, j;

    media = media(x, n);

    for(j=0; j<n;j++){
        F[j]=0;
        for(i=0; i<n; i++)
            F[j]+=((x[i]-x[j])*(x[i]-x[j]));

        F[j]=F[j]/((x[j]+media)*(x[j]+media));
    }
    return;
}

int main(void)
{


    return 0;
}
