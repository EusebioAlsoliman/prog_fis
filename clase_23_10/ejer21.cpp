#include <iostream>
using namespace std;
int main(void)
{
    char cMin, cMay;
    do
    {
        cout << "Introduzca un caracter para transformarlo a mayúscula (introduzca digito para salir): ";
        cin >> cMin;

        // C es minuscula
        if(cMin >= 'a' && cMin <= 'z')
            cMay = cMin - 'a' + 'A';
        else if(cMin == 'ñ')
            cMay = 'Ñ';
        else if((cMin >= 'A' && cMin <= 'Z')||cMin=='Ñ')
            cMay = cMin;

        cout << "El carácter en mayuscula es: " << cMay << endl;
    }while(cMin<'0' || cMin>'9');


    return 0;
}
