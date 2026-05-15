#include <iostream>
//Para usasr o #define precisa colocar aqui abaixo dos includes 
//#define NUM_VIDAS 10
//Observe que não tem o ; no final!!!!

int main() {

	const int NUM_VIDAS = 10;

	int TotalDeVidas;

	TotalDeVidas = NUM_VIDAS - 1;

	std::cout << "Total de vidas: " << TotalDeVidas << "\n";
	std::cout << "Valor Constante NUM_VIDAS :" << NUM_VIDAS << "\n";
	std::cout << "Endereço de Memória de NUM_VIDAS: " << &NUM_VIDAS;




	system("PAUSE > nul");
	return 0;
}