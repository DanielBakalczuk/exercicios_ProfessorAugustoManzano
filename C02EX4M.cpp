//C03EX4M.cpp
/* Leia A,B,C e apresentar a soma dos quadrados dos tr�s valores lidos, sem guardar o processamento na memoria */

#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
//Habilitar acentua��o
   setlocale(LC_ALL,"Portuguese");

//vari�veis
   int A,B,C,R;
   cout<< "insira o valor da vari�vel A ";cin>> A;
   cin.ignore(80, '\n');
   cout<< "insira o valor da vari�vel B ";cin>> B;
   cin.ignore(80, '\n');
   cout<< "insira o valor da vari�vel C ";cin>> C;
   cin.ignore(80, '\n');   
//sa�da
   cout<< "A soma do quadrado dos tr�s valores � "<<" "<< (R=pow(A, 2) + pow(B, 2) + pow(C, 2))<< endl;
   cout<< endl;
   cout<< "Pressione <Enter> para finalizar o programa ";
   cin.get();
   return 0;
     
}
