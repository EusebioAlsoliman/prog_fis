#include <iostream>

using namespace std;

int f(int x)
{
    if(x>100) return x-10;
    else return f(f(x+11));
}

int main()
{
    int n = 54;
    cout << "Resultado de f(" << n << "): " << f(n);

    return 0;
}
