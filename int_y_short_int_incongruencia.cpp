#include <iostream>

using namespace std;

int main(){
    short entero_corto;
    int entero;

    entero = 40000;
    entero_corto = entero + 2;

    cout << "El valor de entero corto es: " << entero_corto << endl;

    // Asociación de real a entero
    int num_int;
    float num_real;

    num_real = 5.7;
    num_int = num_real;

    cout << "El valor de num_int es: " << num_int << endl;

    return 0;
}
