//C03EX4Q.cpp
/*Calcular a �rea do circunfer�ncia, solicitando o valor do raio*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;


 int main(void)
{    
//Habilitar acentua��o
 setlocale (LC_ALL,"Portuguese");
//Constantes
 const float PI =3.14159265;
//Vari�veis
 float A,R;
//Formata��o casas decimais
     cout<<setprecision(2);
     cout<<setiosflags(ios::right);
     cout<<setiosflags(ios::fixed);
//Entrada
         cout<<"Informe o valor do raio da circunfer�ncia ";cin>>R;
//Processamento
             A=PI*(pow(R, 2));
//Sa�da
         cout<<"A �rea da circunferencia � "<<A<<endl;
         cout<<endl;
         cout<<"Pressione <Enter> para finalizar o programa ";
         cin.get();
         return 0; 
}