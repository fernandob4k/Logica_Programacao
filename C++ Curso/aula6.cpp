#include <iostream>
using namespace std;

int n1, n2; // Variáveis globais

int main()
{
    // operadores

    int n3, n4; // variáveis locais
    int res, res2;
    float div, divresto;

    n1 = 11;
    n2 = 3;
    n3 = 4;
    n4 = 2;

    res = (n1 + n2 + n3 + n4) - 11;
    res2 = (n1 + n2) * n4;
    div = n1 / n2;
    divresto = n1 % n2;
    cout << "Soma de todas as variaveis: " << res << ":" << res2 << '\n';
    cout << "Divisão = " << div << "O resto da divisão ou mod = " << divresto << '\n';
    return 0;
}
