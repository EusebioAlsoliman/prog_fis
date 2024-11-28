#include <iostream>
#include <string>

using namespace std;

/* Con la plantilla (template), consigo que la función intercambia sirva
tanto para variables de tipo string, como int, float, double, short int, long int.... */
template <typename T>
void intercambia(T& s1, T& s2)
{
    T s_aux;
    s_aux = s1;
    s1 = s2;
    s2 = s_aux;
    return;
}

void BurbujaStr(string cad[], int n)
{
    int i,j;

    for(i=1; i<n; i++){
        for(j=0; j < n-i; j++){
            if(cad[j]>cad[j+1])
                intercambia(cad[j], cad[j+1]);
        }
    }
    return;
}

int main()
{
    int a = 12;
    int b = 24;
    cout << a << " | " << b << endl;

    intercambia(a, b);

    cout << a << " | " << b << endl;

    cout << "La función intercambia() también sirve para otros tipos de variables gracias a la plantilla!\n";

    string c = "Manolo";
    string d = "Pepe";
    cout << c << " | " << d << endl;

    intercambia(c, d);

    cout << c << " | " << d << endl;

    return 0;
}
