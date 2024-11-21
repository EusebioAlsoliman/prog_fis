// Ver https://www.youtube.com/watch?v=xli_FI7CuzA

#include <iostream>
#include <windows.h>

using namespace std;

void intercambia(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void mostrar_vector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void Burbuja(int v[], int n)
{
    int i,j;

    for(i=1; i<n; i++){
        for(j=0; j < n-i; j++){
            if(v[j]>v[j+1])
                intercambia(v[j], v[j+1]);
            mostrar_vector(v, 7);
            // system("pause");
        }
    }
    return;
}

/*void Burbuja(int v[], int n)
{
    int i,j;
    for (i=n-1; i>0; i--) {
        for (j=0; j<i; j++) {
            if(v[j]>v[j+1])
                intercambia(v[j], v[j+1]);
            mostrar_vector(v, 7);
            system("pause");
        }
    }
}*/

int main()
{
    int v[7] = {2, 8, 5, 3, 9, 4, 1};

    cout << "Vector sin ordenar:\n";
    mostrar_vector(v, 7);

    cout << endl << endl;

    // Ordenar Vector
    Burbuja(v, 7);

    cout << "Vector ordenado:\n";
    mostrar_vector(v, 7);

    return 0;
}
