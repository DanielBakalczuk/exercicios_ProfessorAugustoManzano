// C05EX01D.cpp
/*Elaborar um programa que  apresente o somatório dos valores pares existentes na faixa de 1 a 500*/
#include <iostream>
#include <clocale>
using namespace std;

int main(void)
{
    int i, s, r;
    s = 0;
    i = 1;
    while (i <= 500)
    {
        r = i % 2;
        if (r == 0)
        {
            s = s + i;
        }
        ++i;
     }
    
    cout << "A soma dos valores pares entre 1 e 500 é "
         << "="
         << " "
         << s;
    cout << endl;
    cout << "Pressione <Enter> para finalizar o programa";
    cin.get();
    return 0;
}
