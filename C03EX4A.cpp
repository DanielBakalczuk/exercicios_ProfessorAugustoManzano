//C03EX4A.CPP
/*LEIA A TEMPERATURA em celsius e converta para Fahrenheit*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
//variaveis
  float C,F;
//entrada de dados
  cout<< "informe a temperatura em graus Celsius ";cin>> C;
  cin.ignore(80, '\n');
//processamento
  F = C*9/5+32;
//Saida
  cout<< "temperatura atual em Fahrenheit "<< "="<< F;
  cout<< endl;
  cout<< endl;
  cout<< "Pressione enter para finalizar o programa ";
  cin.get();
  return 0;

}
