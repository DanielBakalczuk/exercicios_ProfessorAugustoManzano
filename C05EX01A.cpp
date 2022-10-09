// C05EX01A.cpp
/*apresentar  os quadrados armazenados na memoria dos números inteiros existentes na faixa de valores de 15 a 200 laço pré teste enquanto */
#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main(void)
{
    setlocale(LC_ALL, "pt_BR UTC-8");

    int i = 15;
    int quadrado;

    while (i <= 200)
    {
        quadrado = pow(i, 2);
        cout << "o quadrado de " << i
             << " "
             << "="
             << " " << quadrado
             << endl
             << endl;
        ++i;
    }

    cout << endl;
    cout << "Pressione <Enter> para finalizar o programa ";
    cin.get();
    return 0;
}