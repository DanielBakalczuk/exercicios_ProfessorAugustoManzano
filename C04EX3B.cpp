//C04EX3B.cpp
/*Ler um valor inteiro positivo ou negativo representado por N e apresentar o valor lido como positivo*/
#include<iostream>
#include<clocale>
using namespace std;

  int main(void)
{
//Acentua��o
  setlocale(LC_ALL,"Portuguese");
//Vari�veis
  int N,R;
//Entrada
     cout<<"Informe um valor num�rico positivo ou negativo ";cin>>N;
     cin.ignore(80, '\n');

//Decis�o
     if(N>0)
{
         R=N;
}
     else
{
         R=N*(-1);

}
//Saida
     cout<<"O positivo de "<<N<<" "<<"�"<<" "<<R<<endl;
     cout<<endl;

     cout<<"Pressione <Enter> para finalizar o programa";
     cin.get();
return 0;
}
