#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

void intercambia(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;

	cout << "Valores de x e y dentro de \'intercambia\': " << x << " | " << y << endl;
}

int main()
{
    SetConsoleOutputCP(1252); //1252 es el c�digo para mostrar castellano

    float x = 3;
    float y = 9;
    intercambia(x, y);

    cout << "Valores de x e y en \'main\': " << x << " | " << y << endl;

    return 0;
}
