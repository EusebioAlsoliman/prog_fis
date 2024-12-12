#include <iostream>
#include <windows.h>

using namespace std;

class cFecha
{
public:
    int dia, mes, anio;

    cFecha(void)  // Constructor
    {
        dia = 1;		   //Objeto cFecha se inicializa
        mes = 1;		   //al 1 de Enero de 1970
        anio = 1970;         //No se usa return
    }

    void Rellenar(void)
    {
        do {
        cout << "D�a: "; cin >> dia;
        } while (dia>31);

        do {
        cout << "Mes: "; cin >> mes;
        } while (mes>12);

        cout << "A�o: "; cin >> anio;
        return;
    }

    bool EsBisiesto(void)
    {
        if(anio%4==0) return true;
        else return false;
    }

    void FechaActual(void)
    {
        // Lo que sea
        // No se hace porque implicaría el uso de librerias externas
        // que se salen del temario de la asignatura
        return;
    }
};

int CalcularEdad(cFecha fnac)
{
    // Terminar semana 18/12
}

int main()
{
    SetConsoleOutputCP(1252); //1252 es el c�digo para mostrar castellano

    cFecha cumpleanios;

    cFecha fecha_por_defecto;

    cumpleanios.anio=2023;
    cumpleanios.dia=20;
    cumpleanios.mes=12;

    cout << "Mi cumplea�os es el d�a " << cumpleanios.dia << " del mes " << cumpleanios.mes << endl;

    if(cumpleanios.EsBisiesto()) cout << "El a�o " << cumpleanios.anio << " es bisiesto" << endl;
    else cout << "El a�o " << cumpleanios.anio << " NO es bisiesto" << endl;

    cout << "La fecha por defecto es " << fecha_por_defecto.dia << " del mes " << fecha_por_defecto.mes << " del año " << fecha_por_defecto.anio << endl;

    return 0;
}
