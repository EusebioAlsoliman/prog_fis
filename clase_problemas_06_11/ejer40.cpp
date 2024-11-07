#include <iostream>

using namespace std;

double Calcular_f(double s, double x[], int i, int n)
{
    int j;
    double num, den;

    num=1.0;
    den=1.0;

    for(j=0; j<i;j++){
        num = num * (s - x[j]);
        den = den * (x[i]-x[j]);
    }

    for(j=i+1;j<n;j++){
        num = num * (s - x[j]);
        den = den * (x[i]-x[j]);
    }

    return num/den;
}

double Calcular_r(double x[], double y[], int n, double s)
{
    int i;
    double suma = 0.0;

    for(i=0;i<=n-1;i++)
        suma = suma + Calcular_f(s, x, i, n)*y[i];

    return suma;
}

int main()
{
    double x[4] = {1,2,4,5};
    double y[4] = {6,7,8,9};

    cout << "Resultado : " << Calcular_r(x,y,4,3.2);
    return 0;
}

