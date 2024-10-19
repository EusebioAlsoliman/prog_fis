#include <iostream>
#include <cmath>

using namespace std;

float funcion(int n, float x)
{
    int termino;
    float suma = 0.0;
    for(int i = 0; i <= n; i++){
        termino = 2*i + 1;
        suma = suma + ((pow(x,termino))/termino);
    }

    return suma;
}

int main() {
    // Declaración de variables
    int n;
    float x;

    do {
        // Se pide al usuario que introduzca el valor de n y x
        cout << "Introduzca el valor de x (debe ser menor a la unidad): " << endl;
        cin >> x;
    } while (x >= 1);

    cout << "Introduzca el valor de n: " << endl;
    cin >> n;

    // Llamada a la función y se guarda resultado en la variable 'resultado'
    float resultado = funcion(n, x);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}
