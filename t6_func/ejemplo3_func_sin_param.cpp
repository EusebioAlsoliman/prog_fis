#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>

using namespace std;

char getMayuscula(void)
{
	char c;
	c=getch();
	if((c>='a')&&(c<='z')) c=c+'A'-'a';
	else if(c=='ñ') c='Ñ';
	return c;
}

int main()
{
    SetConsoleOutputCP(1252); //1252 es el código para mostrar castellano

	char tecla;
	cout << "Pulse una tecla ";
	tecla=getMayuscula();
	cout << endl << "Ha pulsado: " << tecla;
	return 0;
}
