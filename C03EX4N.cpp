//C03EX4N.cpp
/* Leia A,B,C e apresentar a soma dos quadrados dos tr�s valores lidos, guardando o processamento na memoria */
#include <iostream>
#include <cmath>
using namespace std;

int main (void)
{
//Habilitar acentua��o
 setlocale(LC_ALL, "Portuguese");
//Vari�veis
 int A,B,C,R;
//Entrada
      cout<<"Informe o valor da vari�vel A ";cin>>A;
      cin.ignore(80, '\n');
      cout<<"Informe o valor da vari�vel B ";cin>>B;
      cin.ignore(80, '\n');
      cout<<"Informe o valor da vari�vel C ";cin>>C;
      cin.ignore(80, '\n');
//Processamento
            R=pow(A, 2)+pow(B, 2)+pow(C, 2);
//Sa�da 
      cout<<"O resultado da soma dos quadrados � "<<" "<<R<<endl;
      cout<<"Pressione <Enter> para finalizar o programa ";
      cout<<endl;
      cin.get();
      return 0; 
    
}  