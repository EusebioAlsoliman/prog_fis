#include <iostream>
#include <cmath>
using namespace std;

void divisor_propio(unsigned int n)
{
    int lim = n/2;

    int suma = 1;
    for(int i = 2; i <= lim; i++)
    {
        if(n%i==0) suma+=i;

    }

    if(n==suma) cout << "PERFECTO\n";
    else if (n < suma) cout << "ABUNDANTE\n";
    else cout << "DEFICIENTE\n";
}

int main(void)
{
    divisor_propio(12);
    return 0;
}
