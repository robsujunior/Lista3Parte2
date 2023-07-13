#include <iostream>
using namespace std;

struct data
{
    int dia;
    string mes;
    int ano;
};

struct dados
{
    string nome;
    int idade;
    string sexo;
    string cpf;
    data nascimento;
    int codigo;
    string cargo;
    float salario;
};

int main()
{
    dados registro;
    cout << "Nome do funcionário: ";
    cin >> registro.nome;
    cout << "Idade do funcionário: ";
    cin >> registro.idade;
    cout << "Sexo do funcionário (M ou F): ";
    cin >> registro.sexo;
    cout << "CPF do funcionário: ";
    cin >> registro.cpf;
    cout << "Dia do nascimento: ";
    cin >> registro.nascimento.dia;
    cout << "Mes do nascimento por extenso: ";
    cin >> registro.nascimento.mes;
    cout << "Ano do nascimento: ";
    cin >> registro.nascimento.ano;
    cout << "Código do setor onde trabalha(0-99): ";
    cin >> registro.codigo;
    cout << "Digite o cargo do funcionário: ";
    cin >> registro.cargo;
    cout << "Digite o salário do funcionário: ";
    cin >> registro.salario;

    cout << "Nome do funcionário: " << registro.nome << endl;
    cout << "Idade do funcionário: " << registro.idade << endl;
    cout << "Sexo do funcionário: " << registro.sexo << endl;
    cout << "CPF do funcionário: " << registro.cpf << endl;
    cout << "Data de nascimento: " << registro.nascimento.dia << " de " << registro.nascimento.mes << " de " << registro.nascimento.ano << endl;
    cout << "Código do setor onde trabalha: " << registro.codigo << endl;
    cout << "Cargo do funcionário: " << registro.cargo << endl;
    cout << "Salário do funcionário: " << registro.salario << endl;
    
    return 0;
}
