#include <iostream>
#define TAM_MAX 5

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

void media_varianza(float v[], int n, float& media, float& varianza)
{

}

int main(void)
{
    float x[TAM_MAX];
    int i;

    for(i=0;i<TAM_MAX;i++)
    {
        cout << "Introduzca el elemento número " << i+1 << ": ";
        cin >> x[i];
    }

    float med = media(x, TAM_MAX);
    cout << "La media es: " << med << endl;
    return 0;
}
