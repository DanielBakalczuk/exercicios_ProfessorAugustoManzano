//C03EX4O.cpp
/* Leia quatro valores inteiros (A,B,C,D) e apresentar o resultado do produto da primeira com a terceira variável (A,C) e apresente
a soma da segunda com a quarta variável (B,D)*/
#include <iostream>
using namespace std;

int main (void)
{
//Habilitar acentuação
 setlocale(LC_ALL,"Portuguese");
//Variáveis
 int A,B,C,D,P,S;
//Entrada
     cout<<"Informe o valor da variável A ";cin>>A;
     cin.ignore(80, '\n');
     cout<<"Informe o valor da variável B ";cin>>B;
     cin.ignore(80, '\n');
     cout<<"Informe o valor da variável C ";cin>>C;
     cin.ignore(80, '\n');
     cout<<"Informe o valor da variável D ";cin>>D;
     cin.ignore(80,'\n');
//Processamento
         P=A*C;
         S=B+D;
//Saida
     cout<<A<<"X"<<C<<" "<<P<<endl;
     cout<<B<<"+"<<D<<" "<<S<<endl;
     cout<<endl;
     cout<<"Pressione <Enter> para finalizar o programa ";
     cin.get();
     return 0;
}