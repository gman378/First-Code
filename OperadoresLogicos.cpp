#include <iostream>

int main()
{

	setlocale(LC_ALL, "portuguese");

	double Numero1;
	bool MaiorQue100;

	std::cout << "Digite um numero: ";
	std::cin >> Numero1;
	std::cout << "True = 1, False = 0" << "\n";

	MaiorQue100 = (Numero1 > 100);

	std::cout << "O resultado Lógico verifica se o numero digitado é maior que: " << MaiorQue100 << "\n";

	system("PAUSE");
	return 0;

}