#include <iostream>
#include <string>

int main()
{
        //Não finalizado, aos poucos vou adicionando coisas a mais.
	
	std::string username, senha, RespostaCerta;
	std::string username2, senha2, RespostaCerta2;
	char Autenticaçao;

	std::cout << "Crie um um nome de usuario: ";
	std::cin >> username;	
	std::cout << "Crie uma senha: ";
	std::cin >> senha;

	RespostaCerta == (senha, username);

	std::cout << "Faça login, informe seu username: ";
	std::cin >> username2;	
	std::cout << "Informe sua senha: ";
	std::cin >> senha2;

	RespostaCerta2 == (senha2, username2);	

	if (RespostaCerta == RespostaCerta2)
	{
		std::cout << "Login realizado com sucesso!" << std::endl;
		return 0;
	}
	else if (RespostaCerta != RespostaCerta2)
	{ 
	
		std::cout << "Login ou senha incorretos" << std::endl;
		return 0;

	}



	return 0;
}
