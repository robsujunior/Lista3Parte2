#include <iostream>
using namespace std;

struct aluno{
    string nome;
    float nota[3];
};

int main()
{
    float soma[10];
    aluno estudantes[100];

    for (int i = 0; i < 100; i++)
    {
        soma[i] = 0;

        cout << "Digite o nome do " << i+1 << "º aluno: ";
        cin >> estudantes[i].nome;
        for(int j = 0; j < 3; j++)
        {
            cout << "Digite a nota de " << estudantes[i].nome << " na prova " << j+1 << ": ";
            cin >> estudantes[i].nota[j];
            soma[i] += estudantes[i].nota[j];
        }
    }

    for(int i = 0; i < 100; i++)
    {
        if(soma[i] >= 60)
        {
            cout << estudantes[i].nome << " foi aprovado com " << soma[i] << " pontos" << endl;
        }
        else
        {
            cout << estudantes[i].nome << " foi reprovado com " << soma[i] << " pontos" << endl;
        }
    }
    
    return 0;
}
