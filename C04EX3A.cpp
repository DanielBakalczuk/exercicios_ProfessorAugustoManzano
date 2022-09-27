//C04EX3A.cpp
/*efetuar  a leitura de dois valores inteiros e apresentar o resutaldo da diferença do maior pelo menor*/
#include<iostream>
#include<clocale>
using namespace std;

int main(void)
{
//Acentuação
  setlocale(LC_ALL,"Portuguese");
//Variáveis
    int A,B,X,R;
//Entrada
     cout<<"Informe o valor da variável A ";cin>>A;
     cin.ignore(80, '\n');
     cout<<"Informe o valor da variável B ";cin>>B;
     cin.ignore(80, '\n');
//decisão
     if(A>B)
     {
         R=A-B;
     }
     else
     {
         R=B-A;
     }
//Saida
     cout<<A<<"-"<<B<<""<<"="<<R<<endl;
     cout<<endl;

     cout<<"Pressione <Enter> para finalizar o programa";
     cin.get();
return 0;
}
