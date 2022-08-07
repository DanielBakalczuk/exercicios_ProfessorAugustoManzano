//C03EX4M.cpp
/* Leia A,B,C e apresentar a soma dos quadrados dos três valores lidos, sem guardar o processamento na memoria */

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
//Habilitar acentuação
   setlocale(LC_ALL,"Portuguese");

//variáveis
   int A,B,C,R;
   cout<< "insira o valor da variável A ";cin>> A;
   cin.ignore(80, '\n');
   cout<< "insira o valor da variável B ";cin>> B;
   cin.ignore(80, '\n');
   cout<< "insira o valor da variável C ";cin>> C;
   cin.ignore(80, '\n');   
//saída
   cout<< "A soma do quadrado dos três valores é "<<" "<< (R=pow(A, 2) + pow(B, 2) + pow(C, 2))<< endl;
   cout<< endl;
   cout<< "Pressione <Enter> para finalizar o programa ";
   cin.get();
   return 0;
     
}
