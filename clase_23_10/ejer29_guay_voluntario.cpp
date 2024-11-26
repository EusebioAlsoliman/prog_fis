#include <iostream>

using namespace std;

bool EsGuay(int n)
{
    int i, j, lim, suma;
    bool resultado;
    resultado = false;
    lim = n / 2;
    i = 1;
    while ((i <= lim) && (resultado == false))
    {
        suma = i;
        j = i + 1;
        while ((suma < n) && (resultado == false))
        {
            suma = suma + j;
            if (suma == n)
                resultado = true;
            else
                j++;
        }
        i++;
    }
    return resultado;
}

int main()
{
    int a;

    cout << "Introduzca posible numero guay: ";
    cin >> a;

    cout << "El número " << a << " es guay? " << EsGuay(a);
    return 0;
}