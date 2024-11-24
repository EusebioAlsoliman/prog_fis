/***** TORRES DE HANOI *****/
/*Este ejercicio se resuelve por el principio de inducción:

	a) Caso n=1 => Solución trivial = "Pasar el aro 1 de p1 a p2"

	b) Hipótesis de inducción: Es posible pasar n-1 aros de un poste a otro

	c) Demostración para caso general (n aros):
	Para pasar n aros de p1 a p2:
                        ▪ Pasar n-1 de p1 a p3 (hipótesis de inducción)
                        ▪ Pasar aro 1 de p1 a p2 (caso n=1)
                        ▪ Pasar n-1 aros de p3 a p2 (hipótesis de inducción)*/

#include <iostream>
#include <windows.h>

using namespace std;

int contador=0;

void Hanoi(int n, char p_inicio, char p_final, char p_aux)
{
	if(n==1)
    {
        cout << "Movimiento " << contador << ": Pasa el aro 1 desde " << p_inicio << " hasta " << p_final << endl;
        contador++;
        system("pause");
    }
	else
	{
		Hanoi(n-1,p_inicio,p_aux,p_final);
		cout << "Movimiento " << contador << ": Pasa el aro " << n << " desde " << p_inicio << " hasta " << p_final << endl;
		contador++;
		system("pause");
		Hanoi(n-1,p_aux,p_final,p_inicio);
	}
}

int main()
{
    char c_inicio = '1', c_aux = '2', c_final = '3';
    Hanoi(4, c_inicio, c_final, c_aux);
    return 0;
}
