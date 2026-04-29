#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    // comando goto

    int n1, n2, res;
    char opc;
inicio:
    system("cls");

    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = n1 + n2;

    if (res >= 60)
    {
        cout << "\nAluno Aprovado\n";
    }
    else if (res >= 40)
    {
        cout << "\nAluno Recupercao \n";
    }
    else
    {
        cout << "\nAluno Reprovado \n ";
    }

    cout << "Digite outras notas ? [S / N] : ";
    cin >> opc;

    if (opc == 's' || opc == 'S')
    {
        goto inicio;
    }
    return 0;
}