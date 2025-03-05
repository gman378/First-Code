#include <iostream>

int main()
{

	setlocale(LC_ALL, "portuguese");

    float Num1, Num2;
	float Resultado;
	char Resposta;
	do
	{

		std::cout << "Digite um numero para Multiplicar... ";
		std::cin >> Num1; 
		std::cout << "Digite um segundo numero para Multiplicar... ";
		std::cin >> Num2; 

		//O "Cin" vai guardar oque o Usuario digitou.

		Resultado = (Num1 * Num2);

		//Então "Resultado" pega os numeros que "Cin" guardou, e mostra para o Usuario.

		std::cout << "Resultado: " << Resultado << "\n";
		std::cout << "Deseja fazer mais uma conta? (Digite S para Sim, e N para Não)";
		std::cin >> Resposta;

	} while (Resposta == 'S'|| Resposta == 's');

	std::cout << "Fechando programa...";
	system("PAUSE");
	return 0;

}