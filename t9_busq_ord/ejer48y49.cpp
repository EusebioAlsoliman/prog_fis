#include <iostream>

using namespace std;

int division_entera(int dividendo, int divisor)
{
    if (dividendo<divisor) return 0;
    else return 1 + division_entera(dividendo-divisor, divisor);
}

int resto_entero(int dividendo, int divisor)
{
    if(dividendo<divisor) return dividendo;
    else return resto_entero(dividendo-divisor, divisor);
}

int main()
{
    int a=25, b=6;
    cout << "El resultado de dividir " << a << " entre " << b << " es " << division_entera(a, b) << " y el resto es " << resto_entero(a, b) << endl;

    return 0;
}
