#include <iostream>
#include <cmath>

using namespace std;

double integral(double n, double incx)
{
    double suma = 0.0;

    for(double x = incx; x<=n; x+=incx)
        suma += (sin(x)*sin(x))/(x*x);

    suma*=incx;
    return suma;
}

int main(void)
{
    return 0;
}
