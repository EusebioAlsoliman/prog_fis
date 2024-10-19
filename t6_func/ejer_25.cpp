#include <iostream>
#include <cmath>

using namespace std;

double funcion(int n, double x)
{
    int termino;
    double suma = 0.0;
    for(int i = 0; i <= n; i++){
        termino = 2*i + 1;
        suma = suma + ((pow(x,termino))/termino);
    }

    return suma;
}

int main() {
    // Declaración de variables
    int n;
    double x;

    // Se pide al usuario que introduzca el valor de n y x
    cout << "Introduzca el valor de x: " << endl;
    cin >> x;

    cout << "Introduzca el valor de n: " << endl;
    cin >> n;

    // Llamada a la función y se guarda resultado en la variable 'resultado'
    double resultado = funcion(n, x);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}
