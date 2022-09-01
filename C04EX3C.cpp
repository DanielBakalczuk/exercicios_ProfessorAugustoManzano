//C04EX3C.cpp
/*leia  4 notas calcule a média aritimética(variavel MG) e apresentar a mensagem "Aprovado" caso a media seja maior que 5 e "Reprovado"
 nos casos em que a media for menor que 5 */
#include<iostream>
#include<clocale>
using namespace std;

  int main(void)
{
//Acentuação
  setlocale(LC_ALL,"Portuguese");
//Variáveis
  float N1,N2,N3,N4,MD;
//Entrada
     cout<<"INFORME A PRIMEIRA NOTA ";cin>>N1;
     cin.ignore(80, '\n');
     cout<<"INFORME A SEGUNDA NOTA ";cin>>N2;
     cin.ignore(80, '\n');
     cout<<"INFORME A TERCEIRA NOTA ";cin>>N3;
     cin.ignore(80, '\n');
     cout<<"INFORME A QUARTA NOTA ";cin>>N4;
     cin.ignore(80, '\n');
//PROCESSAMENTO
     MD=(N1+N2+N3+N4)/4;
//Decisão
     if(MD>=5)
{
     cout<<"APROVADO";
}
     else
{
     cout<<"REPROVADO";
}
//Saida

     cout<<endl;
     cout<<"Pressione <Enter> para finalizar o programa";
     cin.get();
return 0;
}
