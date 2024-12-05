#include <iostream>
#include <fstream>

using namespace std;

void CalcularMedias(string nombrefich, double& m1, double& m2, double& m3)
{
    ifstream f1;
    int num1, num2, num3, contador;
    double suma1 = 0, suma2 = 0, suma3 = 0;

    f1.open(nombrefich);
    if(f1.is_open())
    {
        while(!f1.eof())
        {
            f1 >> num1;
            f1 >> num2;
            f1 >> num3;

            suma1+=num1;
            suma2+=num2;
            suma3+=num3;

            contador++;
        }
        f1.close();

        m1 = suma1/contador;
        m2 = suma2/contador;
        m3 = suma3/contador;
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
