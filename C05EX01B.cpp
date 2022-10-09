// C05EX01B.cpp
/*elabore um programa que mostre o resultado da tabua de um numero qualquer, a qual deve apresentar o resultado da maneira tradicional*/
#include <iostream>
#include <clocale>
#include <iomanip>
using namespace std;

int main(void)
{
    setlocale(LC_ALL, "pt_BR UTC-8");

    int n, i, r;
    i = 1;

    cout << "Informe um numero inteiro ";
    cin >> n;
    cin.ignore(80, '\n');
    while (i <= 10)
    {
        r = n * i;
        cout << n << "X" << i
             << " "
             << "="
             << " "
             << r << endl;
        ++i;
    }
    cout << endl;
    cout << "Pressione <Enter> para finalizar o programa ";
    cin.get();
    return 0;
}