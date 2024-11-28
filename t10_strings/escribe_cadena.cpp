#include <iostream>

using namespace std;

void EscribeCadena(char cad[])
{

	int i;
	i=0;
	while(cad[i]!='\0')
	{
		cout << cad[i];
		i++;
	}
	return;
}

int main()
{
    char hola[] = "HOLAA";
    EscribeCadena(hola);
    return 0;
}
