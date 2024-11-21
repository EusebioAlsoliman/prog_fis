// Ver https://www.youtube.com/watch?v=g-PGLbMth_g

#include <iostream>

using namespace std;

void intercambia(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void Seleccion(int v[], int n)
{
   int i,j,posmin;

   for(i=0;i<(n-1);i++)
   {
	posmin=i;
	for(j=i+1;j<n;j++)
	   if(v[j]<v[posmin]) posmin=j;

	intercambia(v[i],v[posmin]);
   }
   return;
}

void mostrar_vector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int v[7] = {2, 8, 5, 3, 9, 4, 1};

    cout << "Vector sin ordenar:\n";
    mostrar_vector(v, 7);

    cout << endl << endl;

    // Ordenar Vector
    Seleccion(v, 7);

    cout << "Vector ordenado:\n";
    mostrar_vector(v, 7);

    return 0;
}
