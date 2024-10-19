#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(1252); //1252 es el código para mostrar castellano

	char minuscula, mayuscula;

	// Pido una letra
	cout << "Elija una letra mayúscula: ";
	cin.get(mayuscula);

	// Paso la letra a mayúscula
	minuscula = (mayuscula - 'A') + 'a';

	// Muestro resultado
	cout << "La letra pulsada fue: " << mayuscula << endl;
	cout << "En minúscula es: " << minuscula << endl;

	return 0;
}
