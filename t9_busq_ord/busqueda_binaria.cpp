#include <iostream>

using namespace std;

int BuscaBinaria(int v[], int n, int valor)
{
   int izda,dcha,centro;
   bool encontrado;
   int contador = 0;

   encontrado=false;
   izda=0;
   dcha=n-1;
   while(!encontrado && (izda<=dcha))
   {
        centro=(izda+dcha)/2;
        if(v[centro]==valor) encontrado=true;
        else if(v[centro]>valor) dcha=centro-1;
        else izda=centro+1;
        contador++;
   }

   if (encontrado){
        cout << "He tardado " << contador << " iteraciones\n";
        return centro;
   }
   else return -1;
}

int main()
{
    int v[7] = {1, 2, 3, 4, 5, 8, 9};
    int buscar;
    cout << "Introduzca valor a buscar en 'v': ";
    cin >> buscar;

    int pos = BuscaBinaria(v, 7, buscar);

    cout << "El elemento " << buscar << " se encuentra en la posicion " << pos << endl;

    return 0;
}
