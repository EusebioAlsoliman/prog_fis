//Función media: calcula la media de dos valores reales
//Parámetros: dos valores reales (x e y)
//Valor devuelto: valor medio (tipo real)

#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

float media (float x, float y)
{
    float m;

	m=(x+y)/2;
	return m;
}

int main(void)
{
    SetConsoleOutputCP(1252); //1252 es el código para mostrar castellano

    int a, b;
    cin >> a;

    cin >> b;

    cout << media(a, b);

    return 0;
}
