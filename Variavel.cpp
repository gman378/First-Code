#include <iostream>
#include <tchar.h>

int main()
{

	int NumVidas = 5;
	int score = 1350;
	std::cout << "****" << std::endl;
	std::cout << "Vidas Jogador:   " << NumVidas << std::endl;
	std::cout << "Score: " << score << std::endl;
	
	//Teste de Variavel.

	std::cout << "Endere�o que NumVidas ocupa na RAM:  " << &NumVidas << "\n";
	std::cout << "Endere�o que Score ocupa na RAM:  " << &score << "\n";
	std::cout << "Tamanho do valor de NumVidas: " << sizeof(NumVidas) << "bytes" << "\n";
	std::cout << "Tamanho do valor de Score: " << sizeof(score) << "bytes" << "\n";
	
	std::cout << "****DURANTE O JOGO*****" << std::endl;
	score = score + 150;
	NumVidas = NumVidas -1;
	std::cout << "Vidas Jogador:   " << NumVidas << std::endl;
	std::cout << "Score: " << score << std::endl;


    system ("PAUSE");

}