#include <iostream>
using namespace std;

struct dadoslivros
{
    string titulo;
    string autor;
    int ano;
};

int main()
{
    dadoslivros livros[5];
    int lancamento;

    livros[0] = {"As aventuras de Pi", "Yann Martel", 2001};
    livros[1] = {"A culpa é das estrelas", "John Green", 2012};
    livros[2] = {"O Diabo Veste Prada", "Lauren Weisberger", 2003};
    livros[3] = {"O Príncipe", "Nicolau Maquiavel", 1532};
    livros[4] = {"Leviatã", "Thomas Hobbes", 1651};

    cout << "Digite um ano para procurar um livro lançado nele: ";
    cin >> lancamento;

    for(int i = 0; i < 5; i ++){
        if (lancamento == livros[i].ano)
        {
            cout << "Nome do livro: " << livros[i].titulo << endl;
            cout << "Autor do livro: " << livros[i].autor << endl;
            cout << "Ano de lançamento: " << livros[i].ano << endl;
        }
        
    }
    
    return 0;
}
