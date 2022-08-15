//C03EX4U.cpp
/*Calcule e apresente o valor do volume de uma esfera*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
 int main(void)
{
//Variáveis
 const float PI=3.14159;
 float RAIO,VOLUME;  
//Habilitar acentuação
 setlocale(LC_ALL, "pt_BR");
//Formatação casas decimais
 cout<<setprecision(2);
 cout<<setiosflags(ios::right);
 cout<<setiosflags(ios::fixed);
//Entrada
     cout<<"Informe o raio da esfera ";cin>>RAIO;
     cin.ignore(80, '\n');
//Processamento
         //VOLUME=4/3*PI*pow(RAIO, 3);
         VOLUME=(4*PI*pow(RAIO, 3))/3;
//Saída
     cout<<"O volume da esfera é de "<<VOLUME<<" Unidade de medida "<<endl;
     cout<<endl;
     cout<<"Pressione <Enter> para finalizar o programa ";
     cin.get();
return 0;          
}