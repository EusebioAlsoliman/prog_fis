#include <iostream>
#include <cmath>

using namespace std;

bool EsPrimo(int n)
{
    bool resultado=true;

    for(int i = 2; i < n; i++){
        if(n%i == 0) resultado = false;
    }
    return resultado;
}

int main(void)
{
    return 0;
}
