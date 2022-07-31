//C03EX4J.cpp
/*Ler dois números inteiros e apresentar o quadrado da diferença do primeiro em relação ao segundo */

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
//VARIÁVEIS    
  int A,B,S1,R;
//ENTRADA 
  cout<<"Entre com o valor A ";cin>>A;
  cin.ignore(80, '\n');
  cout<<"Entre com o Valor B ";cin>>B;
  cin.ignore(80,'\n');
//PROCESSAMENTO
    S1=(A-B);
    R=pow(S1, 2);
//SAIDA
  cout<<"O quadrado de "<<" "<<A<<"-"<<B<<" "<<"="<<" "<<R<<endl;
  cout<<endl;
  cout<<"Pressione <Enter> para finalizar o programa ";
  cin.get();
  return 0;
    
}