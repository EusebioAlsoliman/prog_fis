#include <iostream>

using namespace std;

void Dec2Bin(int n)
{
    if(n<2) cout << n;
    else{
        Dec2Bin(n/2);
        cout << n%2;
    }
    return;
}

int main()
{
    int a=3;
    cout << a << " | ";
    Dec2Bin(a);
    return 0;
}
