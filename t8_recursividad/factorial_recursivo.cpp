#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n==0) return 1;
    else return n*factorial(n-1);
}

int main()
{
    int x;
    cout << "Introduzca el valor del factorial a calcular: ";
    cin >> x;

    cout << "El factorial es: " << factorial(x) << endl;

    return 0;
}
