#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class cAlumno
{
public:
    string DNI;
    string nombre, apellido;
    float notaexfeb, notaexmar;
    float notapracticas[10];
};

double CalcularMediaPracticas(cAlumno alumno, int numpracticas)
{
    int i;
    double suma;

    suma=0.0;
    for(i=0; i < numpracticas; i++)
        suma+=alumno.notapracticas[i];

    return suma/numpracticas;
}

void MostrarListadoAlumnosAprobados(cAlumno alumno[], int n)
{
    int i, nota_prac;

    cout << "Listado de alumnos aprobados" << endl;
    cout << "----------------------------" << endl;

    for(i=0; i < n; i++)
    {
        nota_prac = CalcularMediaPracticas(alumno[i], 10);
        if(nota_prac>=5)
        {
            cout << alumno[i].apellido;
            cout << ", " << alumno[i].nombre;
            cout << "    " << nota_prac << endl;
        }
    }

    return;
}

int main()
{
    srand(time(NULL));
    int i, j, horquilla;

    cAlumno alumnos[3];

    alumnos[0].nombre = "Pepe";
    alumnos[0].apellido = "Guerrero";

    alumnos[1].nombre = "Albert";
    alumnos[1].apellido = "Einstein";

    alumnos[2].nombre = "Rodrigo";
    alumnos[2].apellido = "Rodriguez";

    // Asignar notas a los alumnos
    for(i=0; i < 3; i++)
    {
        if(alumnos[i].nombre == "Pepe") horquilla = 2;
        else if (alumnos[i].nombre == "Albert") horquilla = 9;
        else horquilla = 7;

        for(j=0; j < 10; j++)
            alumnos[i].notapracticas[j] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX) + horquilla;
    }

    int id_alumno=0;

    int nota_prac = CalcularMediaPracticas(alumnos[id_alumno], 10);

    cout << "La media de prácticas del alumno " << alumnos[id_alumno].nombre << " " << alumnos[id_alumno].apellido << " es " << nota_prac << endl;

    MostrarListadoAlumnosAprobados(alumnos, 3);

    return 0;
}
