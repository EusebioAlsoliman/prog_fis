#include <iostream>
using namespace std;
int main(void)
{
    int i,n,maximo,minimo;
    maximo=0;
    minimo=5000;
    for(i=1;i<6;i++){
        do{
            cout<<"Escriba un numero (" <<i<< "): ";
            cin>>n;
        }while(n<0 || n>5000);
        //Factorizo el valor de maximo
        if(n>maximo) {
            maximo=n;
        }
        //Factorizo el valor de minimo
        if(n<minimo) {
            minimo=n;
        }
    }
    //Escribir
        cout<<"El maximo es: "<< maximo<<endl;
        cout<<"El minimo es: "<<minimo<<endl;
    return 0;
}
