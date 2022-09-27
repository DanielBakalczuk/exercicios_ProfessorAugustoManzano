//C04EX3.cpp
/*ler 4 notas e tirar a media aritimetica, caso a media seja maior ou igual a 7 apresentar a msg de APROVADO
caso for menor, pedir a entrada de uma quinta nota(recuperação) e calcular uma nova media aritimetica entre A primeira media e a nota do exame final,
 se essa media for maior ou igual a 5 apresentar a msg "aprovado em exame", caso contrario apresentar a msg "reprovado" */
#include<iostream>
#include<clocale>
using namespace std;

  int main(void)
{
//Acentuação
  setlocale(LC_ALL,"Portuguese");
//Variáveis
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
//Decisão
     if(MD>=7)
     {
      cout<<"Aprovado";
     }
     else
     {
      cout<<"Informe a nota do exame ";cin>>N5;
      cin.ignore(80, '\n');
         MD2=(N5+MD)/2;


      if(MD2>=5)

       cout<<"Aprovado em exame final ";
      else{

         cout<<"Reprovado";
         cout<<MD2<<endl;
          }
      }

//Saida

     cout<<endl;
     cout<<"Pressione <Enter> para finalizar o programa";
     cin.get();
return 0;
}


