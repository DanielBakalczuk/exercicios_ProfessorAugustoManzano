//C03EX4l.cpp
/* Converter d�lar em real com o usu�rio informando a cota��o atual e a quantidade de Real que possui */

#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;


int main(void)
{
//habilitar acentua��o
  setlocale(LC_ALL,"Portuguese");
//Vari�veis
  float REAL,DOLAR, COTACAO;
//FORMATA��O CASAS DECIMAIS
  cout<<setprecision(2);
  cout<<setiosflags(ios::right);
  cout<<setiosflags(ios::fixed);
//Entrada
  cout<<"informe a cota��o atual do Reais em rela��o ao D�lar "; cin>>COTACAO;
  cin.ignore(80, '\n');
  cout<<"Informe a quantidade de Reais que voc� quer realizar a convers�o para real ";cin>>REAL;
  cin.ignore(80, '\n');
//PROCESSAMENTO
    DOLAR=REAL/COTACAO;
//SAIDA
  cout<<REAL<< "R$"<<" "<< "� igual a"<<" "<<DOLAR<<"$"<<endl;
  cout<<endl;
  cout<<"Pressione <Enter> para finalizar o programa ";
  cin.get();
  return 0;
} 
/*Descobrir pq quando o  usu�rio usa a virgula para entrar o valor n�o salva as casas decimais, s� salva se ele usar "." separando.*/ 