// https://unirfp.unir.net/revista/ingenieria-y-tecnologia/programacion-estructurada/

#include <iostream>

using namespace std;

int main(void)
{
    int c = 0;
    int n;
    bool sigo = true;

    do{
        cout << "Introduzca valor " << c << " : " << endl;
        cin >> n;
        if(n+3>10)
            sigo = false;
        else
            c++;
    } while (c<10 && sigo);

    return 0;
}
