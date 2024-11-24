#include <iostream>

using namespace std;

int BuscaBinaria(int v[], int izda, int dcha, int valor)
{
   int centro;

   /*while(!encontrado && (izda<=dcha))
   {
        centro=(izda+dcha)/2;
        if(v[centro]==valor) encontrado=true;
        else if(v[centro]>valor) dcha=centro-1;
        else izda=centro+1;
        contador++;
   }

   if (encontrado){
        return centro;
   }
   else return -1;*/

   if(izda>dcha) return -1;
   else{
       centro=(izda+dcha)/2;
        if(v[centro]==valor) return centro;
        else if(v[centro]>valor) return BuscaBinaria(v, izda, dcha-1, valor);
        else return BuscaBinaria(v, izda-1, dcha, valor);
   }
}

int main()
{
    int v[7] = {1, 2, 3, 4, 5, 8, 9};
    int buscar;
    cout << "Introduzca valor a buscar en 'v': ";
    cin >> buscar;

    int pos = BuscaBinaria(v, 0, 7-1, buscar);

    cout << "El elemento " << buscar << " se encuentra en la posicion " << pos << endl;

    return 0;
}
