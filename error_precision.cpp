#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a, suma;
    a = 0.01;
    suma = a + a + a + a + a + a + a + a + a + a;
    cout << "Muestro resultado en notación por defecto: ";
    cout << suma << endl;

    cout << "Muestro resultado en notación científica: ";
    cout << scientific << setprecision(10) << suma << endl;

    return 0;
}
