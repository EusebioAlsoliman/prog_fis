#include <iostream>

using namespace std;

int main(){
    int entero1, entero2;
    float cociente;
    entero1 = 200;
    entero2 = 3;

    // Casting clásico
    cociente = (float) entero1 / entero2; // casting
    cociente = entero1 / (float) entero2;
    cociente = (float) entero1 / (float) entero2;

    // Casting con static_cast

    cociente = static_cast<float>(entero1) / entero2; // casting
    cout << "El cociente es: " << cociente << endl;
    cociente = entero1 / static_cast<float>(entero2);
    cout << "El cociente es: " << cociente << endl;
    cociente = static_cast<float>(entero1) / static_cast<float>(entero2);
    cout << "El cociente es: " << cociente << endl;

    return 0;
}
