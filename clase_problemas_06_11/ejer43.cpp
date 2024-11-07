#include <iostream>

using namespace std;

void MezclarVectores(int v1[], int n1, int v2[], int n2, int v3[])
{
    int i, j, k, n3;

    n3 = n1 + n2;

    i=j=k=0;

    while((i<n1)&&(j<n2)){
        if(v1[i]<v2[j]){
            v3[k]=v1[i];
            i++;
        }
        else{
            v3[k]=v2[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        v3[k]=v1[i];
        i++;
        k++;
    }

    while(j<n2){
        v3[k]=v2[j];
        j++;
        k++;
    }

    return;
}

int main()
{
    
    return 0;
}

