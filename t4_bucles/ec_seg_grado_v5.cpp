/*Programa que calcula las soluciones de una
ecuaci�n de segundo grado */

#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1252); //1252 es el c�digo para mostrar castellano

    // Declarar variables
    float a, b, c, x1, x2, rad, raiz, divisor;

    // Pedir al usuario los valores de a, b y c
    cout << "Introduce el valor de a: \n";
    cin >> a;

    cout << "Introduce el valor de b: \n";
    cin >> b;

    cout << "Introduce el valor de c: \n";
    cin >> c;

    // �Y si 'a' es 0? No puedo dividir entre 0
    if (a != 0)
    {
        // Calcular el valor del radicando
        rad = pow(b,2)-4*a*c;

        // IF anidado para comprobar que el radicando es mayor de 0
        if (rad >= 0)
        {
            // Calcular el valor del divisor
            divisor = 2 * a;

            // Calcular raiz
            raiz = sqrt(rad);

            // Calcular primera soluci�n
            x1 = (-b + raiz) / divisor;

            // Calcular segunda soluci�n
            x2 = (-b - raiz) / divisor;

            cout << "Las soluciones de la ecuaci�n son " << x1 << " y " << x2 << endl;
        }
        else
        {
            cout << "La ecuaci�n no tiene soluci�n real" << endl;
        }
    }
    else
    {
        x1 = (-1.0*c)/b;
        cout << "La �nica soluci�n es " << x1 << endl;
    }

    return 0;
}
