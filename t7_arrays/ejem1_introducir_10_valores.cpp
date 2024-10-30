#include <iostream>

using namespace std;

int main(void)
{
    float x[10], suma, media;
    int i;

    suma=0.0;
    for(i=0;i<12;i++)
    {
        cout << "Introduzca el elemento número " << i+1 << ": ";
        cin >> x[i];
        suma=suma+x[i];
    }

    media=suma/10;
    cout << "La media es: " << media;
    return 0;
}
