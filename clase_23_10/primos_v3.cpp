#include <iostream>
#include <cmath>

using namespace std;

bool EsPrimo(int n)
{
    bool resultado=true;

    if(n == 2) resultado = true;
    else if(n%2==0) resultado = false;
    else{
        for(int i = 3; i < (n/2); i+=2){
            if(n%i == 0) resultado = false;
        }
    }

    return resultado;
}

int main(void)
{
    return 0;
}
