//C03EX4P.cpp
/* Ler o valor do sal�rio,ler a porcentagem de reajuste e calcular e apresentar o novo sal�ria*/

//Bibliotecas 
#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
//Habilitar acentua��o
setlocale(LC_ALL,"Portuguese");
//Vari�veis
 float SM,PR,NS;
//Formata��o casas decimais
     cout<<setprecision(2);
     cout<<setiosflags(ios::right);
     cout<<setiosflags(ios::fixed);
//Entrada
     cout<<"Informe o valor do sal�rio mensal do funcion�rio  ";cin>>SM;
     cout<<"informe percentual de reajuste que o sera aplicado sobre o sal�rio do funcion�rio ";cin>>PR;
//Processamento
         NS=(SM+(SM*(PR/100)));
//Saida   
     cout<<"O novo sal�rio do funcion�rio ser� de "<<NS;
     cout<<endl;
     cout<<"Pressione <Enter> para finalizar o programa ";
     cin.get();
     return 0;
}
