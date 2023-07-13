#include <iostream>
using namespace std;

struct pessoa
{
    string nome;
    int idade;
    string endereco;    
};

int main()
{
    pessoa informacao;

    cout << "Digite o nome da pessoa: ";
    cin >> informacao.nome;
    cout << "Digite a idade da pessoa: ";
    cin >> informacao.idade;
    cout << "Digite o endereço da pessoa: ";
    cin >> informacao.endereco;
    
    return 0;
}
