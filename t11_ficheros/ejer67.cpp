#include <iostream>
#include <fstream>

using namespace std;

void CalcularFrecuencias(string nombrefich)
{
    ifstream f1;
    int contador[101];
    int i, num;

    for(i=0; i< 101; i++) contador[i] = 0; // Inicializar a 0 el array

    f1.open(nombrefich);
    if(f1.is_open())
    {
        while(!f1.eof())
        {
            f1 >> num;
            contador[num]++;
        }
        f1.close();

        for(i=0; i< 101; i++)
            cout << "Valor " << i <<" se ha encontrado " << contador[i] << " veces\n";
    }
    else{
        cout << "Error en la lectura del fichero." << endl;
    }

    return;

}

int main()
{
    string nombre_del_fichero("enteros.txt");
    double a1, a2, a3;

    CalcularMedias(nombre_del_fichero, a1, a2, a3);
    cout << a1 << " | " << a2 << " | " << a3 << endl;
    return 0;
}
