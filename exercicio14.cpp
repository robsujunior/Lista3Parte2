#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string gabarito[10];
    string resposta[10];
    float nalunos[36];
    float notaaluno[36];
    float aprovados = 0;
    float porcentagem;
    for (int i = 0; i < 10; i++)
    {   
        cout << "Gabarito questão " << i+1 << " (a, b, c, d ou e): ";
        cin >> gabarito[i];
    }

    for(int i = 0; i < 36; i ++)
    {
        cout << "Digite o número do "  << i+1 << "º aluno: ";
        cin >> nalunos[i];
        notaaluno[i] = 0;
        for(int j = 0; j < 10; j++)
        {
            cout << "Reposta do aluno nº " << nalunos[i] << " questão " << j+1 << ": ";
            cin >> resposta[j];

            if (resposta[j] == gabarito[j])
            {
                notaaluno[i]++;
            }
            
            
        }
    }

    for (int i = 0; i < 36; i++)
    {
        cout << "Nota do aluno nº" << nalunos[i] << ": " << notaaluno[i] << endl;   
    }

    for (int i = 0; i < 36; i ++){
        if(notaaluno[i] >= 6)
        {
            aprovados++;
        }
    }
    porcentagem = aprovados*(100/36);
    cout << "A porcentagem de aprovados é: " << porcentagem << "%";

    
    

    
    return 0;
}
