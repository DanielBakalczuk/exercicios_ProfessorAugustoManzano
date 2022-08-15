//C03EX4T.cpp
/*Calcular  e apresentar o valor que um projétil que percorre uma distancia em quilometro e um espaço de tempo em minutos*/
#include<iostream>
#include<iomanip>
using namespace std;

 int main(void)
{
//variáveis
 float DISTANCIA,VELOCIDADE,TEMPO;   
//Habilitar acentuação
 setlocale(LC_ALL,"pt_BR");
//Formatação das casas decimais
 cout<<setprecision(2);
 cout<<setiosflags(ios::right);
 cout<<setiosflags(ios::fixed); 
//Entrada
     cout<<"Informe a distancia percorrida pelo projétil em quilômetros ";cin>>DISTANCIA;
     cin.ignore(80, '\n');
     cout<<"Informe a o tempo em minutos que o projetil demorou para percorrer o trajeto completo ";cin>>TEMPO;
     cin.ignore(80, '\n');
//Processamento
         VELOCIDADE=(DISTANCIA*100)/(TEMPO*60);
//Saída
     cout<<"A velocidade do projétil é de "<<" "<<VELOCIDADE<<" Metros por segundo"<<endl;
     cout<<endl;
     cout<<"pressione <Enter> para finalizar o programa";
     cin.get();
return 0;

}