<<<<<<< HEAD
#include <iostream> 
using namespace std;

int main ( ) {

    int num;

    num = 12;

    if ((num >= 3 && num <=6 )||(num > 9 && num < 15 )||(num >15 && num < 20)){
        cout << "\n valor aceito " << '\n';
    }else{
        cout << "\n Não aceito " << '\n' ;
    }

    return 0;
=======
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
>>>>>>> 2d5b6acff9761dcfc57f9d977c983a1807be9e63
}