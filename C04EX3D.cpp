//C04EX3.cpp
/*ler 4 notas e tirar a media aritimetica, caso a media seja maior ou igual a 7 apresentar a msg de APROVADO
caso for menor, pedir a entrada de uma quinta nota(recupera��o) e calcular uma nova media aritimetica entre A primeira media e a nota do exame final,
 se essa media for maior ou igual a 5 apresentar a msg "aprovado em exame", caso contrario apresentar a msg "reprovado" */
#include<iostream>
#include<clocale>
using namespace std;

  int main(void)
{
//Acentua��o
  setlocale(LC_ALL,"Portuguese");
//Vari�veis
     float N1,N2,N3,N4,N5,MD,MD2;
//Entrada
     cout<<"INFORME A PRIMEIRA NOTA ";cin>>N1;
     cin.ignore(80, '\n');
     cout<<"INFORME A SEGUNDA NOTA ";cin>>N2;
     cin.ignore(80, '\n');
     cout<<"INFORME A TERCEIRA NOTA ";cin>>N3;
     cin.ignore(80, '\n');
     cout<<"INFORME A QUARTA NOTA ";cin>>N4;
     cin.ignore(80, '\n');
//Processamento
         MD=(N1+N2+N3+N4)/4;
//Decis�o
     if(MD>=7)
     {
      cout<<"Aprovado";
      cin.ignore(80, '\n');
      cout<<endl;
      cout<<"Pressione <Enter> para finalizar o programa";
      cin.get();
return 0;
     }
     else
     {
      cout<<"Informe a nota do exame ";cin>>N5;
      cin.ignore(80, '\n');
         MD2=(N5+MD)/2;

     }
      if(MD2>=5)
      {
       cout<<"Aprovado em exame final ";
       cin.ignore(80, '\n');
      }
      else
      {
       cout<<"Reprovado";
       cin.ignore(80, '\n');
      }

//Saida

     cout<<endl;
     cout<<"Pressione <Enter> para finalizar o programa";
     cin.get();
return 0;
}
