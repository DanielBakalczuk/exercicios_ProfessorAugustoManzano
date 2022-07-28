//C03EX4H.cpp
/*Calcular o volume de uma caixa retangular*/

#include <iostream>
#include <iomanip>
using namespace std;


  int main(void)
{
//VARIÁVEIS
     float VOLUME,COMPRIMENTO,LARGURA, ALTURA;
//ENTRADA
   cout<<"Informe o comprimento da caixa ";cin>>COMPRIMENTO;
   cin.ignore(80, '\n');
   cout<<"Informe a largura da caixa ";cin>>LARGURA;
   cin.ignore(80, '\n');
   cout<<"Informe a altura da caixa ";cin>>ALTURA;
   cin.ignore(80, '\n');
//PROCESSAMENTO
     VOLUME=COMPRIMENTO*LARGURA*ALTURA;
//SAIDA
   cout<<"Volume"<<" "<<"="<<" "<<VOLUME;
   cout<<endl;
   cout<<"Pressione <Enter> para finalizar o programa ";
   cin.get();
   return 0;
  
}
