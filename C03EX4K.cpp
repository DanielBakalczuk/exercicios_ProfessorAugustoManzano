//C03EX4K.cpp74
/* Converter real em d�lar com o usu�rio informando a cota��o atual e a quantidade de d�lar que possui */

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
  cout<<"informe a cota��o atual do d�lar em rela��o ao real "; cin>>COTACAO;
  cin.ignore(80, '\n');
  cout<<"Informe a quantidade de d�lares que voc� quer realizar a convers�o para real ";cin>>DOLAR;
  cin.ignore(80, '\n');
//PROCESSAMENTO
    REAL=DOLAR*COTACAO;
//SAIDA
  cout<<DOLAR<< "$"<<" "<< "� igual a"<<" "<<REAL<<"R$"<<endl;
  cout<<endl;
  cout<<"Pressione <Enter> para finalizar o programa ";
  cin.get();
  return 0;
} 
/*Descobrir pq quando o  usu�rio virgula para entrar o valor n�o salva as casas decimais, s� salva se ele usar "." separando.*/ 