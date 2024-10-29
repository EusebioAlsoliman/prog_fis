#include <iostream>
using namespace std;
int main(void)
{
    // Declaración variables
    int n;
    float x, y;
    do
    {
        // Pedir número iteraciones
        cout << "Introduzca el numero de iteraciones (n debe ser mayor a 1): ";
        cin >> n;
    }while(n<2);

    float suma = 0.0;
    for(int i = 1; i <= n; i++)
    {
        cout << "Introduzca valor de x(" << i << "): ";
        cin >> x;
        cout << "Introduzca valor de y(" << i << "): ";
        cin >> y;

        // suma = suma + (((x+y)*(x-y))/(n*(n-1)));
        suma = suma + ((x+y)*(x-y));
    }
    float resultado = suma / (n*(n-1));

    cout << "El resultado es: " << resultado << endl;

    return 0;
}
