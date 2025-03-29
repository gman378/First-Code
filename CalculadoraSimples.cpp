#include <iostream>  

//"calculadora" simples.

int main()
{

	setlocale(LC_ALL, "portuguese");

	float Num1, Num2;
	char Operaçao;

	std::cout << "Escolha uma dessas opções: " << "\n";
	std::cout << "1. Somar " << "\n";
	std::cout << "2. Subtrair " << "\n";
	std::cout << "3. Dividir " << "\n";
	std::cout << "4. Multiplicar " << "\n";
	std::cin >> Operaçao;

	//Usuario escolhe qual operaçao quer fazer.

	if
		(Operaçao == '1')
	{
		std::cout << "Digite o primeiro numero: ";
		std::cin >> Num1;
		std::cout << "Digite o segundo numero: ";
		std::cin >> Num2;
		std::cout << "O resultado é: " << Num1 + Num2 << "\n";
	}
	else if (Operaçao == '2')
	{
		std::cout << "Digite o primeiro numero: ";
		std::cin >> Num1;
		std::cout << "Digite o segundo numero: ";
		std::cin >> Num2;
		std::cout << "O resultado é: " << Num1 - Num2 << "\n";
	}
	else if (Operaçao == '3')
	{
		std::cout << "Digite o primeiro numero: ";
		std::cin >> Num1;
		std::cout << "Digite o segundo numero: ";
		std::cin >> Num2;
		std::cout << "O resultado é: " << Num1 / Num2 << "\n";
	}
	else if (Operaçao == '4')
	{
		std::cout << "Digite o primeiro numero: ";
		std::cin >> Num1;
		std::cout << "Digite o segundo numero: ";
		std::cin >> Num2;
		std::cout << "O resultado é: " << Num1 * Num2 << "\n";
	}

	//Aquiao as operaçoes e resultados que o usuario escolheu.

	else
	{
		std::cout << "Opção inválida... :(" << "\n";
	}

	//Caso usuario escolha uma opçao invalida (diferente de 1, 2, 3, 4), ira aparecer esta mensagem.

	return 0;
	system("PAUSE");
}