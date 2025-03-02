#include <iostream>

int main()
{

	setlocale(LC_ALL, "portuguese");

	float Numero1, Numero2, Numero3;
	float Media = { 0.0 };


	std::cout << "Digite um numero: ";
	std::cin >> Numero1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> Numero2;
	std::cout << "Digite o terceiro numero: ";
	std::cin >> Numero3;

	Media = (Numero1 + Numero2 + Numero3) / 3;

	std::cout << "Numeros Digitados: " << Numero1 << " " << Numero2 << " " << Numero3 << "\n";
	std::cout << "Media dos numeros: " << Media << std::endl;

	system("PAUSE");
	return 0;






}