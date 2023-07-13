#include <iostream>
using namespace std;

struct horario
{
    int hora;
    int minutos;
    int segundos;
    
};

struct data
{
    int dia;
    int mes;
    int ano;
};

struct compromisso
{
    data data;
    horario horario;
    string descricaocompromisso;
};

