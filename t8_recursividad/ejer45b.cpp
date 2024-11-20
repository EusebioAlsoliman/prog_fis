#include <iostream>

using namespace std;

int g(int n)
{
    if(n==0) return 0;
    else if (n%2==1) return g(n-1) + n;
    else return g(n-1) - n;
}

int main()
{
    int n = 4;
    cout << "Resultado de g(" << n << "): " << g(n);

    return 0;
}
