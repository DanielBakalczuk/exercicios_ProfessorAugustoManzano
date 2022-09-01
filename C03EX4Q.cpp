//C03EX4Q.cpp
/*Calcular a área do circunferência, solicitando o valor do raio*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace  std;


 int main(void)
{    
//Habilitar acentuação
 setlocale (LC_ALL,"Portuguese");
//Constantes
 const float PI =3.14159265;
//Variáveis
 float A,R;
//Formatação casas decimais
     cout<<setprecision(2);
     cout<<setiosflags(ios::right);
     cout<<setiosflags(ios::fixed);
//Entrada
         cout<<"Informe o valor do raio da circunferência ";cin>>R;
//Processamento
             A=PI*(pow(R, 2));
//Saída
         cout<<"A área da circunferência é "<<A<<endl;
         cout<<endl;
         cout<<"Pressione <Enter> para finalizar o programa "<<endl;
         cin.get();
         return 0; 
}