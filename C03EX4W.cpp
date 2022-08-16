//C03EX4W.cpp
/*Leia a medida em pés e converter para metros*/
#include<iostream>
#include<iomanip>
using namespace std;

int main(void)
{
//Habilitar acentuação
 setlocale(LC_ALL, "pt_BR");
//Formatação casas decimais
 setprecision(2);
 setiosflags(ios::right);
 setiosflags(ios::fixed);
//Variáveis
 float A,R;
//Entrada
     cout<<"Informe o valor da medida em pés ";cin>>A;
     cin.ignore(80,'\n');
//Processamento
         R=A*0.3048;
//Saída
     cout<<A<<" "<<"Pés"<<"equivale a "<<R<<" "<<"Metros"<<endl;
     cout<<endl;
     cout<<"Pressione <Enter> para finalizar o programa ";
     cin.get();
return 0;
} 