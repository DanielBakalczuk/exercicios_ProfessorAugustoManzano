// C04EX04.cpp
/* ler A, B, C efetuar a Equação do segundo grau/Bhaskara caso delta<0 nao a solução real, caso delta>0 a duas soluções reais diferentes, caso delta = 0  há apenas uma solução real*/

#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main(void)
{
  // Acentuação
  setlocale(LC_ALL, "Portuguese");
  // Variáveis
  float A, B, C, D, X1, X2;
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
  // decisão
  if (A == 0 && B == 0 && C == 0)
    cout << "Não é uma equação do segundo grau ";
  else{
    D = pow(B, 2) - 4 * A * C;
  if (D < 0)
    cout << "Não possui uma solução real ";
  else
    X1 = -B + sqrt(D) / 2 * A;
    X2 = -B - sqrt(D) / 2 * A;

    if (D > 0)
    {
      cout << "A equação possui duas soluções reais " << endl;
      cout << "X1 " << "=" << " " << X1 << endl;
      cout << "X2 " << "=" << " " << X2 << endl;
    }
    else
    
    if (D == 0)
    {
      cout << "A equação possui apenas uma solução real ";
      cout << "X " << "=" << " " << X1;
      cout << endl;
    }
     }
   cout << endl;
   cout << "Pressione <Enter> para finalizar o programa ";
   cin.get();
   return 0;
} 
