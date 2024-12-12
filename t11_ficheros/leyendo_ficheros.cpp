#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fichero;
    fichero.open("C:\\Users\\eunai\\Documents\\prog_fis\\t11_ficheros\\ejer68.txt");
    int num;

    while(!fichero.eof())
    {
        fichero >> num;
        cout << num << endl;
    }

    // cout << "La edad es: " << edad;

    return 0;
}
