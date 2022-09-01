//C03EX4N.cpp
/* Leia A,B,C e apresentar a soma dos quadrados dos três valores lidos, guardando o processamento na memoria */
#include <iostream>
#include <cmath>
using namespace std;

int main (void)
{
//Habilitar acentuação
 setlocale(LC_ALL, "pt_BR");
//Variáveis
 int A,B,C,R;
//Entrada
      cout<<"Informe o valor da variável A ";cin>>A;
      cin.ignore(80, '\n');
      cout<<"Informe o valor da variável B ";cin>>B;
      cin.ignore(80, '\n');
      cout<<"Informe o valor da variável C ";cin>>C;
      cin.ignore(80, '\n');
//Processamento
            R=pow(A, 2)+pow(B, 2)+pow(C, 2);
//Saída 
      cout<<"O resultado da soma dos quadrados é "<<" "<<R<<endl;
      cout<<"Pressione <Enter> para finalizar o programa ";
      cout<<endl;
      cin.get();
      return 0; 
    
}  