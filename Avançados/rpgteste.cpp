#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int Vida = 100;
	int Ataque = 10;
	std::string Nome;
	std::string Raça;
	std::string Classe;
	int EscolhaRaca;
	int EscolhaClasse;

	//aqui estao estao as variaveis basicas, como por exemplo a vida e o ataque.

	std::cout << "|Bem Vindo!, escolha o nome de seu personagem.|" << "\n";
	std::cin >> Nome;


	std::cout << "|Escolha sua raça.|" << "\n";
	std::cout << "1 - Humano " << "\n";
	std::cout << "2 - Elfo " << "\n";
	std::cout << "3 - Orc " << "\n";

	std::cin >> EscolhaRaca;

	if (EscolhaRaca == 1)
	{
		Raça = "Humano";
		Ataque += 5;

		//Bonus de ataque bruto para humano.
	}
	else if (EscolhaRaca == 2)
	{
		Raça = "Elfo";
		Vida += 30;

		//Bonus de vida para Elfo.
	}
	else if (EscolhaRaca == 3)
	{
		Raça = "Orc";
		Vida += 10;
		Ataque += 10;	

		//Bonus de vida e ataque para Orc.	
	}
	else
	{
		Raça = "Humano";
		std::cout << "|Raça invalida, voce sera um Humano por padrão.|" << "\n";
	}

	//Aqui o jogador escolhe uma raça. e recebe um bonus dependendo da raça escolhida.

	std::cout << "|Voce escolheu a raça: " << Raça << "|" << "\n";
	std::cout << "|Vida: " << Vida << "| Ataque: " << Ataque << " |" << "\n";

	//Escolher classes.

	std::cout << "|Escolha sua classe|" << "\n";
	std::cout << "1 - Guerreiro " << "\n";
	std::cout << "2 - Mago " << "\n";
	std::cout << "3 - Arqueiro " << "\n";

	std::cin >> EscolhaClasse;

	if (EscolhaClasse == 1)
	{
		Classe = "Guerreiro";
		Vida += 10;
		Ataque += 10;
	}
	else if (EscolhaClasse == 2)
	{
		Classe = "Mago";
		Vida += 15;
		Ataque += 5;
	}
	else if (EscolhaClasse == 3)
	{
	
		Classe = "Arqueiro";
		Vida += 5;
		Ataque += 15;
	
	}
	else
	{
		Classe = "Guerreiro";
		std::cout << "|Classe invalida, voce sera um Guerreiro por padrão.|" << "\n";	

	}

	std::cout << "|Voce escolheu a classe: " << Classe << "|" << "\n";
	std::cout << "|Vida: " << Vida << "| Ataque: " << Ataque << " |" << "\n";

	std::cout << "|Ficha do personagem|" << "\n";
	std::cout << "|Nome: " << Nome << "|" << "\n";
	std::cout << "|Raça: " << Raça << "|" << "\n";

	return 0;
}