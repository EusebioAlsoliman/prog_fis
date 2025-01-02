#include <iostream>
#include <string>

using namespace std;

int ContarSubcadena(string cad, string subcad)
{
    int pos;
    pos=cad.find(subcad);
    if(pos==-1) return 0;
    else return 1+ContarSubcadena(cad.erase(0,pos+1), subcad);
}

int main()
{
    return 0;
}