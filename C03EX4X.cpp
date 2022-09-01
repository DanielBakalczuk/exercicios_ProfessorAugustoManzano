//C03EX4X.cpp
/*Calcular uma raiz de base qualquer e índice qualquer*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

 int main(void)
{
//Habilitar acentuação
 setlocale(LC_ALL, "pt_BR");
//Formatação de casas decimais
 setprecision(2);
 setiosflags(ios::right);
 setiosflags(ios::fixed);
//Variáveis
 float B,I,R;
//Entrada
     cout<<"Informe o valor da base ";cin>>B;
     cin.ignore(80, '\n');
     cout<<"Informe o valor do índice ";cin>>I;
     cin.ignore(80, '\n');
//Processamento
         R=pow(B, (1/I));
//Saída
     cout<<I<<" "<<"Raiz"<<" "<<B<<" "<<"="<<" "<<R<<endl;
     cout<<endl;
     cout<<"Pressione <Enter> para finalizar o programa ";
     cin.get();
return 0;
}
