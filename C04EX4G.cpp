// C04EX4G.cpp
/* 4 valores numéricos inteiros  e apresentar apenas os valores que sejam divisíveis por 2 ou por 3*/

#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main(void)
{
    // Acentuação
    setlocale(LC_ALL, "pt_BR UTC-8");
    // Variáveis
    int A, B, C, D, R2, R3;
    // Entrada
    cout << "Informe o primeiro número inteiro ";
    cin >> A;
    cin.ignore(80, '\n');
    cout << "Informe o segundo  número inteiro  ";
    cin >> B;
    cin.ignore(80, '\n');
    cout << "Informe o terceiro número inteiro ";
    cin >> C;
    cin.ignore(80, '\n');
    cout << "Informe o quarto número inteiro ";
    cin >> D;
    cin.ignore(80, '\n');

    R2 = A % 2;
    R3 = A % 3;
    if (R2 == 0 or R3 == 0)
    {
        cout << A << " "
             << "é divisível por 2 ou por 3"
             << endl;
    }
    else
    {
    }

    R2 = B % 2;
    R3 = B % 3;
    if (R2 == 0 or R3 == 0)
    {
        cout << B << " "
             << "é divisível por 2 ou por 3"
             << endl;
    }
    else
    {
    }

    R2 = C % 2;
    R3 = C % 3;
    if (R2 == 0 or R3 == 0)
    {
        cout << C << " "
             << "é divisível por 2 ou por 3"
             << endl;
    }
    else
    {
    }
    R2 = D % 2;
    R3 = D % 3;

    if (R2 == 0 or R3 == 0)
    {
        cout << D << " "
             << "é divisível por 2 ou por 3"
             << endl;
    }
    else
    {
    }

    cout << endl;
    cout << "Pressione <Enter> para finalizar o programa ";
    cin.get();
    return 0;
}