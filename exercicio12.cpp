#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    int m,n;

    cout << "Digite a quantidade de linhas das matrizes: ";
    cin >> m;
    cout << "Digite a quantidade de colunas das matrizes: ";
    cin >> n;

    int a[m][n];
    int b[m][n];
    int c[m][n];

    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "Digite o valor da 1º matriz na posição (" << i+1 << ", " << j+1 << "): ";
            cin >> a[i][j];
            cout << "Digite o valor da 2º matriz na posição (" << i+1 << ", " << j+1 << "): ";
            cin >> b[i][j];
            
            c[i][j] = a[i][j]*b[i][j];
        }
    }
    cout << "Matriz c:\n\n";
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << setw(4) << c[i][j];
        }
        cout << endl;
    }
    cout << endl;
    cout << "Transposta de c:\n\n";
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << setw(4) << c[j][i];
        }
        cout << endl;
    }
    return 0;
}
