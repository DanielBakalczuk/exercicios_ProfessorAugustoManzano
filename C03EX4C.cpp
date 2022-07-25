//C03EX4C.CPP
/*Calcular o volume de uma lata de óleo*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const float PI = 3.14159;
int main(void)
{
//Variaveis
float VOLUME,R, ALTURA;
//Formatação das casas decimais
  cout<< setprecision(2);
  cout<< setiosflags(ios::right);
  cout<< setiosflags(ios::fixed);
//Entradas
  cout<< "Informe a altura da lata ";cin>>ALTURA;
  cin.ignore(80, '\n');
  cout<< "Informe o raio da lata ";cin>>R;
  cin.ignore(80, '\n');
//Processos
  VOLUME=PI*pow(R, 2)*ALTURA;
//Saida
  cout<< "Volume da lata "<< "="<< VOLUME;
  cout<< "\n \n";
  cout<< "Pressione <Enter> para finalizar o programa ";
  cin.get();
  return 0;

}
