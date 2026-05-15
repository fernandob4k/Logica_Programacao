#include <iostream>
#include <iomanip>

// Colocar caractere unicode

/*
#include <fcntl.h>
#include <io.h>


_setmode(_fileno(stdout), _O_U16TEXT);
std::wcout << L"\u00AE";

system("Pause");*/


int main() {




	int Numero;
	float Numero2;
	double Numero3 = 45345.904555;
	char Caractere = '3';
	char Caractere2 = 'k';

	Numero = 45;
	Numero2 = 55.56f;
	
	std::cout << "Valor Numero: " << Numero << std::endl;
	std::cout << "Tamanho da Variavel Numero: " << sizeof(Numero) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na memoria: " << &Numero << std::endl;

	std::cout << "Valor Numero2: " << Numero2 << std::endl;
	std::cout << "Tamanho da Variavel Numero2: " << sizeof(Numero2) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na memoria: " << &Numero2 << "\n";

	std::cout << "Valor Numero3: " << std::setprecision(12) << Numero3 << std::endl;
	std::cout << "Tamanho da variavel Numero3: " << sizeof(Numero3) << " Bytes" << "\n";
	std::cout << "Endereco Carregado na memoria: " << &Numero3 << "\n";

	std::cout << "Valor Caractere: "<< Caractere << std::endl;
	std::cout << "Tamanho da variavel Numero3: " << sizeof(Caractere) << " Byte" << "\n";
	std::cout << "Endereco Carregado na memoria: " << (void *)&Caractere << "\n";

	std::cout << "Valor Caractere: " << Caractere2 << std::endl;
	std::cout << "Tamanho da variavel Numero3: " << sizeof(Caractere2) << " Byte" << "\n";
	std::cout << "Endereco Carregado na memoria: " << (void *)&Caractere2 << "\n";



	return 0;
}