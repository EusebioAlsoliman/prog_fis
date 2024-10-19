#include <iostream>

using namespace std;

int main(){
    // Declarar variables
    float a, b;
    float temp;

    // Pedir al usuario los valores de a, b y c
    cout << "Introduce el valor de a: \n";
    cin >> a;

    cout << "Introduce el valor de b: \n";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << a << " | " << b << endl;

    return 0;
}