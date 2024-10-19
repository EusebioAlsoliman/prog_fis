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

bool esMayor (int a, int b)
{
	if(a>b) return true;
	else return false;
}

char pasarAMayuscula (char c)
{
	if((c>='a') && (c<='z')) return c+'A'-'a';
	else if(c=='ñ') return 'Ñ';
	else return c;
}

int main()
{
    SetConsoleOutputCP(1252); //1252 es el código para mostrar castellano

    float med = media(10.2,7.3);
    cout << "La media de 10.2 y 7.3 es " << med << endl;

    int x = 3;
    int y = 1;
    if(esMayor(x,y))
        cout << x << " es mayor que " << y << endl;

    char tecla;
    do{
        cout << "Pulse F para acabar: ";
        // cin.get(tecla);
        cin >> tecla;
      } while (pasarAMayuscula(tecla)!='F');

    return 0;
}
