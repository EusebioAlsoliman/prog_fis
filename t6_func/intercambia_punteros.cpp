#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

void intercambia(float* px, float* py)
{
	float temp = *px;
	*px = *py;
	*py = temp;

	cout << "Valores de x e y dentro de \'intercambia\': " << *px << " | " << *py << endl;
}

int main()
{
    SetConsoleOutputCP(1252); //1252 es el c�digo para mostrar castellano

    float x = 3;
    float y = 9;

    // Declaraci�n de variables tipo puntero
    // DEFINICI�N DE PUNTERO: variable en la que se almacena una direcci�n de memoria
    float* px;
    float* py;

    // Asignar a las variables de tipo puntero las direcciones de memoria de 'x' e 'y'
    px = &x;
    py = &y;

    // �Qu� pasa si imprimo por pantalla (cout) las variables 'px' y 'py'?
    cout << "Valor de  px: " << px << endl;
    cout << "Valor de  &x: " << &x << endl;
    cout << "Valor de  py: " << py << endl;
    cout << "Valor de  &y: " << &y << endl;

    cout << endl;

    cout << "Valor de   x: " << x << endl;
    cout << "Valor de   y: " << y << endl;

    cout << endl;

    // DESREFENCIAR UN PUNTERO
    cout << "Vamos a DESREFERENCIAR los punteros con la forma *px y *py" << endl;
    cout << "Valor de *px: " << *px << endl;
    cout << "Valor de *py: " << *py << endl;

    cout << endl;

    intercambia(px, py);

    // Manera alternativa
    // intercambia(&x, &y);

    cout << "Valores de x e y en \'main\': " << x << " | " << y << endl;

    return 0;
}
