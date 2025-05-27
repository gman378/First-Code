#include <iostream>
#include <string>

int main()
{
	std::string SenhaAcesso;
	std::string SenhaDigitada;
	std::string UserName;
	bool AcessoPermitido;
	double Saldo;
	int Opçao;
	double ValorSaque;	
	double ValorDeposito;

	Saldo = 0.0;	

	//char UserName;

	SenhaAcesso = "1234";
		
	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;
	std::cout << "Digite o nome de usuario: ";
	std::cin >> UserName;	

	//Aqui o usuario digita a senha e o nome de usuario.

	if (SenhaDigitada == SenhaAcesso)
	{
		std::cout << "Acesso permitido" << "\n";
		std::cout << "Bem-vindo: " << UserName << "\n";	

			std::cout << "Saldo: " << Saldo << "\n";
			std::cout << "Escolha uma opcao: " << "\n";
			std::cout << "1 - Sacar" << "\n";
			std::cout << "2 - Depositar" << "\n";
			std::cout << "3 - Sair" << "\n";
			std::cin >> Opçao;

			switch (Opçao)
			{
			case '1':
			{
				std::cout << "Quantos reais deseja sacar?" << "\n";
				std::cin >> ValorSaque;

				ValorSaque - Saldo;
			}
			case '2':
			{
				std::cout << "Quanto deseja depositar ?" << "\n";
				std::cin >> ValorDeposito;

			}
			default:
				break;
			}


		

		
		return 0;
	}
	else
	{

		std::cout << "Acesso negado" << std::endl;
		
		AcessoPermitido = false;

		//Aqui o programa detecta que a senha digitada é errada, e nega o acesso.

		return 0;
	}




	return 0;
}