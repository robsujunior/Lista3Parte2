#include <iostream>
using namespace std;

struct dadoscarros
{
    string marca;
    int ano;
    float preco;
};


int main()
{
    float p;
    dadoscarros carros[5];
    carros[0] = {"Toyota Hylux", 2018, 146000};
    carros[1] = {"Renault Fluence", 2015, 51000};
    carros[2] = {"Tesla Model S", 2023, 600000};
    carros[3] = {"Volkswagen Golf", 2014, 61500};
    carros[4] = {"Toyota Supra", 2023, 300000};

    cout << "Digite um valor para ver os carros com preço inferior a esse valor: ";
    cin >> p;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        if (p >= carros[i].preco)
        {
            cout << "Modelo: " << carros[i].marca << endl;
            cout << "Ano: " << carros[i].ano << endl;
            cout << "Preço: " << carros[i].preco << endl << endl;
        }
        
    }
    
    return 0;
}
