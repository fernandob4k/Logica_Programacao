
// Created by pista moto on 21/05/2026.
//
#include <iostream>
#include <iomanip>

int main () {

    float Salario ,SalarioFinal;
    int Percentual;

    std::cout << "Informe o valor do seu salario " ;
    std::cin >> Salario;
    std::cout << "Informe o percentual do aumento  ";
    std::cin >> Percentual;

    SalarioFinal = Salario + Salario * Percentual / 100.0;


    std::cout << std::setprecision(2) << std::fixed << SalarioFinal;



    return 0;
}
