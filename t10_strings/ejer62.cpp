#include <iostream>
#include <string>

using namespace std;

bool EsPalindromo_recursiva(string cad)
{
    int l = cad.length();

    if(l==0) return true;
    else if(cad[0]!=cad[l-1]) return false;
    else return EsPalindromo_recursiva(cad.substr(1, l-2));
}

int main()
{
    return 0;
}
