//C04EX3B.cpp
/*Ler um valor inteiro positivo ou negativo representado por N e apresentar o valor lido como positivo*/
#include<iostream>
#include<clocale>
using namespace std;

  int main(void)
{
//Acentuação
  setlocale(LC_ALL,"Portuguese");
//Variáveis
  int N,R;
//Entrada
     cout<<"Informe um valor numérico positivo ou negativo ";cin>>N;
     cin.ignore(80, '\n');

//Decisão
     if(N>0)
{
         R=N;
}
     else
{
         R=N*(-1);

}
//Saida
     cout<<"O positivo de "<<N<<" "<<"é"<<" "<<R<<endl;
     cout<<endl;

     cout<<"Pressione <Enter> para finalizar o programa";
     cin.get();
return 0;
}
