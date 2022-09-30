// C04EX4I.cpp
/* leia 5 valores numéricos inteiros, identificar e apresentar o menor e o maior valor sem fazer ordenação */

#include <iostream>
#include <clocale>
using namespace std;

int main(void)
{
    // Acentuação
    setlocale(LC_ALL, "pt_BR UTC-8");
    // Variáveis
    int a, b, c, d, e, menor, maior;
    // Entrada
    cout << "Informe o primeiro número inteiro ";
    cin >> a;
    cin.ignore(80, '\n');
    cout << "Informe o segundo  número inteiro  ";
    cin >> b;
    cin.ignore(80, '\n');
    cout << "Informe o terceiro número inteiro ";
    cin >> c;
    cin.ignore(80, '\n');
    cout << "Informe o quarto número inteiro ";
    cin >> d;
    cin.ignore(80, '\n');
    cin.ignore(80, '\n');
    cout << "Informe o quinto número inteiro ";
    cin >> e;
    cin.ignore(80, '\n');

    maior = a;

    if (maior < b)
    {
        maior = b;
    }
    if (maior < c)
    {
        maior = c;
    }
    if (maior < d)
    {
        maior = d;
    }
    if (maior < e)
    {
        maior = e;
    }

    menor = a;

    if (menor > b)
    {
        menor = b;
    }
    if (menor > c)
    {
        menor = c;
    }
    if (menor > d)
    {
        menor = d;
    }
    if (menor > e)
    {
        menor = e;
    }
    cout << "O maior valor é " << maior
         << endl;
    cout << "O menor valor é " << menor
         << endl
         << endl;
    cout << endl;
    cout << "Pressione <Enter> para finalizar o programa ";
    cin.get();
    return 0;
}