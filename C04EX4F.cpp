// C04EX4F.cpp
/* ler três valores inteiros representados pelas variáveis A, B e C e apresenta-los em ordem crescente */
#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main(void)
{
    // Acentuação
    setlocale(LC_ALL, "Portuguese");
    // Variáveis
    int A, B, C, X;
    // Entrada
    cout << "entre o valor <A>: ";
    cin >> A;
    cin.ignore(80, '\n');
    cout << "entre o valor <B>: ";
    cin >> B;
    cin.ignore(80, '\n');
    cout << "entre o valor <C>: ";
    cin >> C;
    cin.ignore(80, '\n');
    // Decisão
    if (A > B)
    {
        X = A;
        A = B;
        B = X;
    }
   
        if (A > C)
    {
        X = A;
        A = C;
        C = X;
    }
    
        if ( B > C)
    {
        X = B;
        B = C;
        C = X;
    }
    // saída
    cout << A << B << C;
    cout << endl;
    cout << "Pressione <Enter> para finalizar o programa ";
    cin.get();
    return 0;
}