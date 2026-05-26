//
// Created by pista moto on 21/05/2026.
//
#include <iostream>
#include <iomanip>

int main () {

    float ValorCarro , ipva, Percentual;


    std::cout << "Informe o valor do carro: ";
    std::cin >> ValorCarro;
    std::cout << "Informe o valor do ipva do carro: ";
    std::cin >> ipva;

    Percentual = (ipva * 100) / ValorCarro;

    std::cout << "o ipva correspode a " << std::fixed << std::setprecision(2 ) << Percentual << " %" " do valor do veiculo";



    return 0;
}
