//C03EX4P.cpp
/* Ler o valor do salário,ler a porcentagem de reajuste e calcular e apresentar o novo salária*/

//Bibliotecas 
#include <iostream>
#include <iomanip>
using namespace std;

int main (void)
{
//Habilitar acentuação
setlocale(LC_ALL,"Portuguese");
//Variáveis
 float SM,PR,NS;
//Formatação casas decimais
     cout<<setprecision(2);
     cout<<setiosflags(ios::right);
     cout<<setiosflags(ios::fixed);
//Entrada
     cout<<"Informe o valor do salário mensal do funcionário  ";cin>>SM;
     cout<<"informe percentual de reajuste que o sera aplicado sobre o salário do funcionário ";cin>>PR;
//Processamento
         NS=(SM+(SM*(PR/100)));
//Saida   
     cout<<"O novo salário do funcionário será de "<<NS;
     cout<<endl;
     cout<<"Pressione <Enter> para finalizar o programa ";
     cin.get();
     return 0;
}
