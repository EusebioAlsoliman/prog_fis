#include <iostream>

using namespace std;

int BuscaLineal(int v[], int n, int valor)
{
	int i;
    bool encontrado;

	encontrado=false;
	i=0;
	while(!encontrado && (i<n))
		if(v[i]==valor) encontrado=true;
		else i++;

	if (encontrado) return i;
	else return -1;
}

int main()
{
    int v[7] = {1, 2, 3, 4, 5, 8, 9};
    int buscar;
    cout << "Introduzca valor a buscar en 'v': ";
    cin >> buscar;



    cout << "El elemento " << buscar << " se encuentra en la posicion " << BuscaLineal(v, 7, buscar) << endl;

    return 0;
}
