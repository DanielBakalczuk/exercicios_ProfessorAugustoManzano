//C03EX4B.CPP
/*leia a temperatura em Fahrenheit e apresentar ela convertida para Celsius.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
//variaveis
  float F,C;
//Formatação de casas decimais
  cout<< setprecision(2);
  cout<< setiosflags(ios::right);
  cout<< setiosflags(ios::fixed);
//Entrada
  cout<< "Informe a temperatura em Fahrnheit ";cin>>F;
  cin.ignore(80, '\n');
//Processamento
  C=((F-32)*5)/9;
//Saida
  cout<< "Temperatura convertida em Celsius "<< "= "<< C;
  cout<< "\n \n";
  cout<< "Pressione <Enter> para finalizar o programa";
  cin.get();
  return 0;

}
