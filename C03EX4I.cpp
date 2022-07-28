//C03EX4I.cpp
/*Efetuar a leitura de um numero inteiro e apresentar o quadrado desse numero sem armazenar na memoria*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
//variáveis 
     int A,R;
//ENTRADA
  cout<<"Informe um numero inteiro ";cin>>A;
  cin.ignore(80, '\n');
//Saida
  cout<<"O quadrado de "<<" "<<A<<" "<<" = ";
  cout<< pow(A, 2);
  cout<<endl;
  cout<<"Pressione <Enter> para finalizar o programa";
  cin.get();
  return 0;

}