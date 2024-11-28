#include <iostream>
#include <string>

using namespace std;

int Bin2Dec(string cad)
{
    int i, num, peso;
    num=0;
    peso=1;
    for(i=cad.length()-1; i>=0; i--)
    {
        if(cad[i]=='1') num+=peso;
        peso=peso*2;
    }
    return num;
}

int main()
{
    string num_bin = "1000";
    cout << "El número binario " << num_bin << " es en decimal el número " << Bin2Dec(num_bin) << endl;

    return 0;
}
