// C04EX4I.cpp
/*Ler um valor inteiro e informar se o valor é impar ou par*/
#include <iostream>
#include <clocale>

using namespace std;

int main(void)
{
    setlocale(LC_ALL, "pt_BR UTC-8");

    int a, r;

    cout << "Informar um valor inteiro ";
    cin >> a;
    cin.ignore(80, '\n');

    r = a % 2;

    if (r == 0)
    {
        cout << a << " "
             << "é um numero par "
             << endl;
    }
    else
    {
        cout << a << " "
             << "é um numero impar "
             << endl
             << endl;
    }
    cout << endl;
    cout << "Pressione <Enter> para finalizar o programa ";
    cin.get();
    return 0;
}
