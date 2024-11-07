// https://unirfp.unir.net/revista/ingenieria-y-tecnologia/programacion-estructurada/

#include <iostream>

using namespace std;

int main(void)
{
    int c = 0;
    int n;

    do{
        cout << "Introduzca valor " << c << " : " << endl;
        cin >> n;
        if(n+3>10)
            break;
        else
            c++;
    } while (c<10);

    return 0;
}
