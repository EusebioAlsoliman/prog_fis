#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(1252); //1252 es el c�digo para mostrar castellano

	char minuscula, mayuscula;

	// Pido una letra
	cout << "Elija una letra may�scula: ";
	cin.get(mayuscula);

	// Paso la letra a may�scula
	minuscula = (mayuscula - 'A') + 'a';

	// Muestro resultado
	cout << "La letra pulsada fue: " << mayuscula << endl;
	cout << "En min�scula es: " << minuscula << endl;

	return 0;
}
