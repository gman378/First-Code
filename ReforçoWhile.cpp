#include <iostream>

int main()
{

	float Numero1, Numero2;
	float Resultado;
	char Resposta;
	do
	{
		std::cout << "Digite um numero: ";
		std::cin >> Numero1;
		std::cout << "Digite um segundo numero: ";
		std::cin >> Numero2;

		Resultado = (Numero1 + Numero2);

		std::cout << "Resultado: " << Resultado << "\n";
		std::cout << "Deseja mais uma conta? (Responda S para Sim, e N para Nao)";
		std::cin >> Resposta;

	} while (Resposta == 'S' || Resposta == 's');

	std::cout << "Saindo do programa...";
	system("PAUSE");
	return 0;

	//Apenas um teste para memorizar a função "While".

}