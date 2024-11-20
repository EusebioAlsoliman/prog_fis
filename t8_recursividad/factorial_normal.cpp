#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n==0) return 1;
    else{
        int prod=1;
        for(int i=1; i<=n; i++)
            prod*=i;
        return prod;
    }
}

int main()
{
    int x;
    cout << "Introduzca el valor del factorial a calcular: ";
    cin >> x;

    cout << "El factorial es: " << factorial(x) << endl;
}
