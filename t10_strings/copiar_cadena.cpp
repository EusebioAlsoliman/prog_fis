#include <iostream>

using namespace std;

/*void CopiarCadena(char cad1[], char cad2[])
{
	int i;
	i=0;
	while(cad1[i]!='\0')
	{
		cad2[i] = cad1[i];
		i++;
	}
	cad2[i] = '\0';
	return;
}*/

void CopiarCadena(char cad1[], char cad2[])
{
	memcpy(cad2, cad1, 6);
	return;
}

int main()
{
    char hola[] = "HOLAA";
    char hola2[6]; // 6 porque "HOLAA" tiene 5 caracteres + \0
    CopiarCadena(hola, hola2);
    printf("%s", hola2);
    return 0;
}
