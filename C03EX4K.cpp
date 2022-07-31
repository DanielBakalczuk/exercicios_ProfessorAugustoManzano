//C03EX4K.cpp74
/* Converter real em dólar com o usuário informando a cotação atual e a quantidade de dólar que possui */

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
  cout<<"informe a cotação atual do dólar em relação ao real "; cin>>COTACAO;
  cin.ignore(80, '\n');
  cout<<"Informe a quantidade de dólares que você quer realizar a conversão para real ";cin>>DOLAR;
  cin.ignore(80, '\n');
//PROCESSAMENTO
    REAL=DOLAR*COTACAO;
//SAIDA
  cout<<DOLAR<< "$"<<" "<< "é igual a"<<" "<<REAL<<"R$"<<endl;
  cout<<endl;
  cout<<"Pressione <Enter> para finalizar o programa ";
  cin.get();
  return 0;
} 
/*Descobrir pq quando o  usuário virgula para entrar o valor não salva as casas decimais, só salva se ele usar "." separando.*/ 