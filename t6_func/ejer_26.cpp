#include <iostream>
#include <cmath>

using namespace std;

// Función para calcular el factorial de un número
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// Función para calcular (1 + x)^m usando la serie
double calcularSerie(double x, int m, int num_terminos) {
    double resultado = 1; // Primer término de la serie es 1

    double termino = 0;         // Para almacenar cada término de la serie
    // Ciclo para sumar los términos de la serie
    for (int n = 1; n <= num_terminos; n++) {
        // Calculamos el numerador m(m-1)(m-2)...(m-n+1)
        double numerador = 1.0;
        for (int j = 0; j < n; j++) {
            numerador = numerador * (m - j);
        }

        // Calculamos el término de la serie
        termino = (numerador / factorial(n)) * pow(x, n);

        // Sumar el término al resultado
        resultado = resultado + termino;
    }

    return resultado;
}

int main() {
    double x;
    int m, num_terminos;

    // Entrada de los valores
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de m: ";
    cin >> m;
    cout << "Ingrese el número de términos de la serie: ";
    cin >> num_terminos;

    // Llamamos a la función para calcular el resultado
    double resultado_final = calcularSerie(x, m, num_terminos);

    // Mostramos el resultado
    cout << "(1 + " << x << ")^" << m << " = " << resultado_final << endl;

    return 0;
}
