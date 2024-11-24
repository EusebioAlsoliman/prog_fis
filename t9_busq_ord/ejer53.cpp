#include <iostream>

using namespace std;

double raizcuadrada(double x, double precision)
{
   double izda, dcha, centro, cuad;
   bool encontrado = false;
   izda=0.0;
   dcha=x;
   while( !encontrado && (izda<=dcha))
   {
        centro=(izda+dcha)/2;
        cuad=centro*centro;
        if((cuad<=x+precision)&&(cuad>=x-precision)) encontrado = true;
        // if(cuad==x) encontrado = true;
        else if(cuad<x) izda=centro+precision;
        else dcha=centro-precision;
   }

   return centro;
}

/*double raizcuadrada(double x, double precision)
{
    double y;

    y = 0.0;
    while(y*y < x)
        y+=precision;

    return y;
}*/

int main()
{
    double precision;
    double x;
    cout << "Introduzca valor de x: ";
    cin >> x;

    cout << "Introduzca valor de la precision: ";
    cin >> precision;

    cout << "Resultado: " << raizcuadrada(x, precision) << endl;

    return 0;
}
