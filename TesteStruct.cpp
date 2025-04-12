#include <iostream>

using namespace std;

struct Pessoa 
{
    string nome;
    int idade;

    void apresentar() {
        cout << "Olá, sou " << nome << " e tenho " << idade << " anos." << "\n";
    }
};

int main() 
{
    Pessoa p1;
    p1.nome = "Joao";
    p1.idade = 30;
    p1.apresentar();

    return 0;
}
