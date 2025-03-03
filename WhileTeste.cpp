#include <iostream>
#include <iomanip>

int main()
{

	setlocale(LC_ALL, "portuguese");

	float Numero1, Numero2, Numero3;
	float Media = { 0.0 };
	char Resposta;
	do
	{

		std::cout << "Digite um numero: ";
		std::cin >> Numero1;
		std::cout << "Digite o segundo numero: ";
		std::cin >> Numero2;
		std::cout << "Digite o terceiro numero: ";
		std::cin >> Numero3;

		Media = (Numero1 + Numero2 + Numero3) / 3;

		std::cout << "Numeros Digitados: " << Numero1 << " " << Numero2 << " " << Numero3 << "\n";
		std::cout << "Média dos Números: " << std::fixed << std::setprecision(2) << Media << "\n";

		std::cout << "Deseja calcular outra Media Artmetica? (Responda S para Sim e N para não) ";
		std::cin >> Resposta;

	} while (Resposta == 'S' || Resposta == 's'); //Qualquer resposta que nao seja S (ou s), vai ser identificado como N (n).
	//quando a resposta eh identificado como N, o programa fecha.

	std::cout << "\nSaindo do programa...";
	system("PAUSE");
	return 0;

}