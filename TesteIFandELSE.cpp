#include <iostream>

int main()
{

	float A, B, C, D;
	float Resultado;
	float Resultado2;
	char Resposta;


	std::cout << "digite um numero para A... ";
	std::cin >> A;
	std::cout << "Digite um segundo numero... ";
	std::cin >> B;

	Resultado = (A + B);

	std::cout << "Resultado: " << Resultado;

	std::cout << "Deseja fazer uma conta de divisao?: ";
	std::cin >> Resposta;

	if (Resposta == 'Sim'|| Resposta == 'S')
	{

		std::cout << "Digite um numero... ";
		std::cin >> C;
		std::cout << "Digite um segundo numero... ";
		std::cin >> D;

		Resultado2 = (C * D);

		std::cout << "Resultado: " << Resultado2;
		return 0;


	}
	else
	{
		return 0;
	}


	return 0;
}