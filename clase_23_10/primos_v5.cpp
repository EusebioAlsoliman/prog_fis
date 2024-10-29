/*Teorema fundamental del �lgebre: "si un entero no es divisible por ning�n entero inferior
a su ra�z, entonces el entero es primo."*/

#include <iostream>
#include <cmath>

using namespace std;

bool EsPrimo(int n)
{
    bool resultado=true;

    if(n == 2) resultado = true;
    else if(n%2==0) resultado = false;
    else{
        int lim = (int)sqrt(n);
        int i = 3;
        while((i<=lim)&&resultado=true){
            if(n%i == 0) resultado = false;
            else i+=2;
        }
    }

    return resultado;
}

int main(void)
{
    return 0;
}
