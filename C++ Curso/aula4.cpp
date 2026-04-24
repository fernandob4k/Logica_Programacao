#include <iostream>
using namespace std;

int main()
{

    int vidas = 10;
    char letra = 'b';
    double decimal1 = 2.5;
    float decimal2 = 2.5;
    bool vivo = true;
    string texto = "Fernando ";

    cout << "digite um número de vida ? ";
    cin >> vidas;
    cout << "digite uma letra: ";
    cin >> letra;
    cout << "digite número decimal ? ";
    cin >> decimal1;
    cout << "digite o número decimal 2 ? ";
    cin >> decimal2;
    cout << "digite o seu nome: ";
    cin >> texto;

    cout << "vidas = "
         << vidas << "\nLetra : "
         << letra << "\nDouble : "
         << decimal1 << "\nFloat : "
         << decimal2 << "\nBool : "
         << vivo << "\nNome : "
         << texto << "\n";

    //system("pause");
    //return 0;
}