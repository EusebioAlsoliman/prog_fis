#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a, suma;
    a = 0.01;
    suma = a + a + a + a + a + a + a + a + a + a;
    cout << "Muestro resultado en notaci�n por defecto: ";
    cout << suma << endl;

    cout << "Muestro resultado en notaci�n cient�fica: ";
    cout << scientific << setprecision(10) << suma << endl;

    return 0;
}
