#include <iostream>

using namespace std;

int main(void)
{
    float x[10];
    int i;

    for(i=0;i<10;i++)
    {
        cout << "Introduzca el elemento n�mero " << i+1 << ": ";
        cin >> x[i];
    }

    cout << "Mostrando el vector: " << endl;
    for(i=0;i<10;i++)
        cout << "Elemento n� " << i+1 << " : " << x[i] << endl;
    return 0;
}
