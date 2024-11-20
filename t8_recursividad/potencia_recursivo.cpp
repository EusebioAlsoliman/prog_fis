#include <iostream>

using namespace std;

double potencia (double x, int n)
{
	if(n==0) return 1;
	else return x*potencia(x, n-1);
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
