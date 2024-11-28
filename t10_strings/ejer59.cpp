#include <iostream>
#include <string>

using namespace std;

int BuscaBinStr(string v[], int n, string nombre)
{
   int izda,dcha,centro;
   bool encontrado;

   encontrado=false;
   izda=0;
   dcha=n-1;
   while(!encontrado && (izda<=dcha))
   {
        centro=(izda+dcha)/2;
        if(v[centro]==nombre) encontrado=true;
        else if(v[centro]>nombre) dcha=centro-1;
        else izda=centro+1;
   }

   if (encontrado) return centro;
   else return -1;
}

int main()
{


    return 0;
}
