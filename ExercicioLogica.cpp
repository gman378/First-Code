#include <iostream>

int main()
{

	setlocale(LC_ALL, "portuguese");


	float A, B, C;
	float Resultado1;
	bool Resultado2;

	std::cout << "Digite o numero de A...: ";
	std::cin >> A;
	std::cout << "Digite o numero de B...: ";
	std::cin >> B;
	std::cout << "Digite o numero de C..: ";
    std::cin >> C;

	Resultado1 = (A + B);

	Resultado2 = (Resultado1 > C);

	std::cout << "C é maior que A e B juntos?: " << Resultado2;

	return 0;
	system("PAUSE");
}