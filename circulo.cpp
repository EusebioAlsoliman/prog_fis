/* Programa ejemplo con reales que calcula el área y
perímetro de un círculo a partir de su radio */
#include <iostream>
#define PI 3.14159
using namespace std;

int main (void)
{
	float radio, superficie, perimetro;

	// Pido el radio de un círculo
	cout << "Radio: ";
	cin >> radio;

	// Calculo la superficie y el perimetro
	superficie = PI*radio*radio;
	perimetro = 2*PI*radio;

	// Muestro los resultados
	cout << "Superficie: " << superficie << endl;
	cout <<  "Perimetro: " << perimetro << endl;
	return 0;
}
