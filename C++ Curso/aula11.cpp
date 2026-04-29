#include <iostream>

using namespace std;

int main()
{

    int num, cine;

    num = 5;

    if (num < 3 || num > 8)
    {
        cout << "Valor aceito" << endl;
    }
    else
    {
        cout << "Valor negado" << endl;
    }

    cine = 0;

    if (cine == 1)
    {
        cout << "vamos ao cineme ";
    }
    else
    {
        cout << "vamos a praia ";
    }
}