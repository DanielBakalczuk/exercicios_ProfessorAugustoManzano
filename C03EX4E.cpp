//C03EX4E.cpp
/*Calculo de prestação em atraso*/

#include <iostream>
using namespace std;

int main(void)
 {
//VARIAVEIS

   int TEMPO;
   float VALOR, TAXA, PRESTACAO;
//ENTRADA
   cout<<"informe o valor original da parcela. ";cin>>VALOR;
   cin.ignore(80, '\n');
   cout<<"informe quantos meses a parcela esta atrasada. ";cin>>TEMPO;
   cin.ignore(80, '\n');
   cout<<"informe o a taxa de juros  ";cin>>TAXA;
   cin.ignore(80, '\n');
//PROCESSAMENTO
   PRESTACAO=VALOR+(VALOR*(TAXA/100)*TEMPO);
// SAIDA
   cout<<"Total a ser pago "<<" "<<"="<<" "<<PRESTACAO<<endl;
   cout<<endl;
   cin.get();
   return 0;
 }
