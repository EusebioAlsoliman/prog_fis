#include <iostream>
#include <string>

using namespace std;

bool EsAnagrama(string cad1, string cad2)
{
    int pos;
    bool anagrama=true;

    if(cad1.length()!=cad2.length()) anagrama=false;
    else
    {
        while(anagrama && (cad1.length()>0))
        {
            pos=cad2.find(cad1[0]);
            if(pos==-1) anagrama=false;
            else
            {
                cad1.erase(0,1);
                cad2.erase(pos, 1);
            }
        }
    }
    return anagrama;
}

int main()
{
    return 0;
}
