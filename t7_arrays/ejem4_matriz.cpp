#include <iostream>
using namespace std;
int main(void)
{
    float x[2][2], det;
    int i,j;

    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
        {
            cout << "Elemento " << i+1 << "," << j+1 << ": ";
            cin >> x[i][j];
        }

    det = x[0][0]*x[1][1]-x[1][0]*x[0][1];
    cout << "Determinante: " << det << endl;
    return 0;
}
