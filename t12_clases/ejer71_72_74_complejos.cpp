#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

class cComplejo
{
private:
    double Re, Im;
public:
    cComplejo(void) // Constructor
    {
        Re=1;
        Im=0;
        // El constructor no tiene return
    }

    void AsignarValor(double a, double b)
    {
        Re=a;
        Im=b;
        return;
    }

    void AsignarValorPolar(double m, double a)
    {
        Re=m*cos(a);
        Im=m*sin(a);
        return;
    }

    double getParteReal(void)
    {
        return Re;
    }

    double getParteImaginaria(void)
    {
        return Im;
    }

    double Modulo(void)
    {
        return sqrt(Re*Re+Im*Im);
    }

    double Argumento(void)
    {
        return atan(Im/Re);
    }

    cComplejo conjugado(void)
    {
        cComplejo aux;
        aux.Re=Re;
        aux.Im=-Im;
        return aux;
    }

    cComplejo operator + (cComplejo op)
    {
        cComplejo aux;
        aux.Re=Re+op.Re;
        aux.Im=Im+op.Im;
        return aux;
    }

    cComplejo operator - (cComplejo op)
    {
        cComplejo aux;
        aux.Re=Re-op.Re;
        aux.Im=Im-op.Im;
        return aux;
    }

    cComplejo operator * (cComplejo op)
    {
        cComplejo aux;
        aux.Re=Re*op.Re-Im*op.Im;
        aux.Im=Re*op.Im+op.Re*Im;
        return aux;
    }

    cComplejo operator / (cComplejo op)
    {
        cComplejo aux;
        aux.Re=(Re*op.Re+Im*op.Im)/(op.Re*op.Re+op.Im*op.Im);
        aux.Im=(op.Re*Im-Re*op.Im)/(op.Re*op.Re+op.Im*op.Im);
        return aux;
    }

    bool operator == (cComplejo op)
    {
        if((Re==op.Re)&&(Im==op.Im)) return true;
        else return false;
    }

    bool operator != (cComplejo op)
    {
        if((Re==op.Re)&&(Im==op.Im)) return false;
        else return true;
    }

    /*
    void operator << (cComplejo op)
    {
        cout << op.Re << " + " << op.Im << "i";
        return;
    }
    */
};

cComplejo CalcularPotencia(cComplejo num, unsigned int n)
{
    cComplejo aux;
    unsigned int i;

    for(i=1;i<n;i++)
        aux=aux*num;

    return aux;
}

cComplejo ejer74_SumarComplejosFichero(string nombreFichero)
{
    ifstream fich;
    cComplejo num, suma;
    double real, imag;

    suma.AsignarValor(0,0);
    fich.open(nombreFichero.c_str());
    while(!fich.eof())
    {
        fich >> real;
        fich >> imag;
        num.AsignarValor(real, imag);
        suma = suma + num;
    }
    fich.close();
    return suma;
}

int main()
{
    cComplejo a;
    cComplejo b;
    cComplejo resultado;

    a.AsignarValor(1, 2);
    b.AsignarValor(3, 4);

    resultado = a + b;

    cout << "El resultado de la suma es: " << resultado.getParteReal() << " + " << resultado.getParteImaginaria() << "i \n";
    // cout << resultado;

    cComplejo suma_desde_fichero;
    suma_desde_fichero = ejer74_SumarComplejosFichero("complejos.txt");

    cout << "La suma de los complejos del fichero es: " << suma_desde_fichero.getParteReal() << " + " << suma_desde_fichero.getParteImaginaria() << "i \n";

    return 0;
}
