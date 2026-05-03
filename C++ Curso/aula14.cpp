#include <iostream>

using namespace std;

int main()
{

    // while(teste lógico){
    //  codigo a ser repetido
    //}
    int cont = 0;

    while (cont++ < 20)
    {

        cout << "canal - " << cont << "\n";
        if (cont == 10)
        {
            break;
        }
    }

    cout << "Program terminated \n";
    return 0;
}