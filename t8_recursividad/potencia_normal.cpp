#include <iostream>

using namespace std;

double potencia (double x, int n){
    double prod = 1;

    for(int i = 0; i < n; i++)
        prod*= x;

    return prod;
}

int main()
{
    double x;
    int n;
    cout << "Introduzca el valor de la base: ";
    cin >> x;
    cout << "Introduzca el valor del exponente: ";
    cin >> n;

    cout << "El resultado es: " << potencia(x,n) << endl;
}
