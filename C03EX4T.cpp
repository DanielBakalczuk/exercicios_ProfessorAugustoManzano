//C03EX4T.cpp
/*Calcular  e apresentar o valor que um proj�til que percorre uma distancia em quilometro e um espa�o de tempo em minutos*/
#include<iostream>
#include<iomanip>
#include<clocale>
using namespace std;

 int main(void)
{
//vari�veis
 float DISTANCIA,VELOCIDADE,TEMPO;
//Habilitar acentua��o
 setlocale(LC_ALL,"portuguese");
//Formata��o das casas decimais
 cout<<setprecision(2);
 cout<<setiosflags(ios::right);
 cout<<setiosflags(ios::fixed);
//Entrada
     cout<<"Informe a distancia percorrida pelo proj�til em quil�metros ";cin>>DISTANCIA;
     cin.ignore(80, '\n');
     cout<<"Informe a o tempo em minutos que o projetil demorou para percorrer o trajeto completo ";cin>>TEMPO;
     cin.ignore(80, '\n');
//Processamento
         VELOCIDADE=(DISTANCIA*1000)/(TEMPO*60);
//Sa�da
     cout<<"A velocidade do proj�til � de "<<" "<<VELOCIDADE<<" Metros por segundo"<<endl;
     cout<<endl;
     cout<<"pressione <Enter> para finalizar o programa";
     cin.get();
return 0;

}

