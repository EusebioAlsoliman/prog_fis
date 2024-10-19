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

void escribeMensaje (int x, int y)
{
	media(x,y);
	cout << "Hola, mundo\n";
	return;
}

int main()
{
    SetConsoleOutputCP(1252); //1252 es el código para mostrar castellano

	// clrscr();
	escribeMensaje(10,10);
	escribeMensaje(12,11);
	//system("cls");
	escribeMensaje(14,12);
	return 0;
}
