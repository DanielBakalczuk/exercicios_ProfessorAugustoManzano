//C03EX4Y.cpp
/*ler dois valores inteiros e apresentar o sucessor e antecessor deste valor*/
#include<iostream>
#include<clocale>
using namespace std;

 int main(void)
{
//Habilitar acentuação
setlocale(LC_ALL, "pt_BR, UTF-8");
//Variáveis
 int A, ANTECESSOR, SUCESSOR;
//Entrada
     cout<<"Informe o valor da variável A ";cin>>A;
     cin.ignore(80, '\n');
//Processamento
          ANTECESSOR=A-1;
          SUCESSOR=A+1;
//Saída
     cout<<"O antecessor de "<<A<<" "<<"é"<<" "<<ANTECESSOR<<endl;
     cout<<endl;
     cout<<"O sucessor de "<<A<<" "<<"é"<<" "<<SUCESSOR<<endl;
     cout<<"Pressione <Enter> para finalizar o programa ";
     cin.get();
return 0;

}