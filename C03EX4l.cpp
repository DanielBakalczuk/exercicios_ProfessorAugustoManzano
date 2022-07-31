//C03EX4l.cpp
/* Converter dólar em real com o usuário informando a cotação atual e a quantidade de Real que possui */

#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;


int main(void)
{
//habilitar acentuação
  setlocale(LC_ALL,"Portuguese");
//Variáveis
  float REAL,DOLAR, COTACAO;
//FORMATAÇÃO CASAS DECIMAIS
  cout<<setprecision(2);
  cout<<setiosflags(ios::right);
  cout<<setiosflags(ios::fixed);
//Entrada
  cout<<"informe a cotação atual do Reais em relação ao Dólar "; cin>>COTACAO;
  cin.ignore(80, '\n');
  cout<<"Informe a quantidade de Reais que você quer realizar a conversão para real ";cin>>REAL;
  cin.ignore(80, '\n');
//PROCESSAMENTO
    DOLAR=REAL/COTACAO;
//SAIDA
  cout<<REAL<< "R$"<<" "<< "é igual a"<<" "<<DOLAR<<"$"<<endl;
  cout<<endl;
  cout<<"Pressione <Enter> para finalizar o programa ";
  cin.get();
  return 0;
} 
/*Descobrir pq quando o  usuário usa a virgula para entrar o valor não salva as casas decimais, só salva se ele usar "." separando.*/ 