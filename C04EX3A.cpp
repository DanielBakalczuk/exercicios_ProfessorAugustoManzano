//C04EX3A.cpp
/*efetuar  a leitura de dois valores inteiros e apresentar o resutaldo da diferen�a do maior pelo menor*/
#include<iostream>
#include<clocale>
using namespace std;

int main(void)
{
//Acentua��o
  setlocale(LC_ALL,"Portuguese");
//Vari�veis
    int A,B,X,R;
//Entrada
     cout<<"Informe o valor da vari�vel A ";cin>>A;
     cin.ignore(80, '\n');
     cout<<"Informe o valor da vari�vel B ";cin>>B;
     cin.ignore(80, '\n');
//decis�o
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
