// C02EX02.CPP
#include <iostream>
using namespace std;

int main(void)
{
    char NOME[40];

    cout << "Informe seu nome: ";
    cin >> NOME;
    cin.ignore (80,'\n');

    cout << "Bom dia, " << NOME;
    cout << endl;

    cout << "Tecle enter para encerrar... ";
    cin.get();
    return 0;
}
