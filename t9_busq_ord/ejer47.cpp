#include <iostream>

using namespace std;

// Partimos de que n es positivo
int ContarDigitos(int n)
{
    if(n<10) return 1;
    else return ContarDigitos(n/10) + 1;
}

int main()
{
    int a = 129;
    cout << "El numero " << a << " tiene " << ContarDigitos(a) << " cifras \n";
    return 0;
}
