#include <iostream>  

//"calculadora" simples.

int main()
{

	setlocale(LC_ALL, "portuguese");

	float Num1, Num2;
	char Opera�ao;

	std::cout << "Escolha uma dessas op��es: " << "\n";
	std::cout << "1. Somar " << "\n";
	std::cout << "2. Subtrair " << "\n";
	std::cout << "3. Dividir " << "\n";
	std::cout << "4. Multiplicar " << "\n";
	std::cin >> Opera�ao;

	//Usuario escolhe qual opera�ao quer fazer.

	if
		(Opera�ao == '1')
	{
		std::cout << "Digite o primeiro numero: ";
		std::cin >> Num1;
		std::cout << "Digite o segundo numero: ";
		std::cin >> Num2;
		std::cout << "O resultado �: " << Num1 + Num2 << "\n";
	}
	else if (Opera�ao == '2')
	{
		std::cout << "Digite o primeiro numero: ";
		std::cin >> Num1;
		std::cout << "Digite o segundo numero: ";
		std::cin >> Num2;
		std::cout << "O resultado �: " << Num1 - Num2 << "\n";
	}
	else if (Opera�ao == '3')
	{
		std::cout << "Digite o primeiro numero: ";
		std::cin >> Num1;
		std::cout << "Digite o segundo numero: ";
		std::cin >> Num2;
		std::cout << "O resultado �: " << Num1 / Num2 << "\n";
	}
	else if (Opera�ao == '4')
	{
		std::cout << "Digite o primeiro numero: ";
		std::cin >> Num1;
		std::cout << "Digite o segundo numero: ";
		std::cin >> Num2;
		std::cout << "O resultado �: " << Num1 * Num2 << "\n";
	}

	//Aquiao as opera�oes e resultados que o usuario escolheu.

	else
	{
		std::cout << "Op��o inv�lida... :(" << "\n";
	}

	//Caso usuario escolha uma op�ao invalida (diferente de 1, 2, 3, 4), ira aparecer esta mensagem.

	return 0;
	system("PAUSE");
}