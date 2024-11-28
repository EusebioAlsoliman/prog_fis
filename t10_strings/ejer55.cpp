#include <iostream>
#include <string>

using namespace std;

bool EsPalindromo(string cad)
{
    int i, lon;
    bool palindromo;

    palindromo=true;
    lon = cad.length();
    while(palindromo && (i<lon/2))
    {
        if(cad[i]!=cad[lon-i-1]) palindromo=false;
        else i++;
    }
    return palindromo;
}

int main()
{
    string grupo_de_musica = "Abba";
    cout << "Es " << grupo_de_musica << " un palindromo? " << EsPalindromo(grupo_de_musica);
    return 0;
}
