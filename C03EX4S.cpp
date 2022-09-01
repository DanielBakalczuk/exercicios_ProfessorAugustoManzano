//C03EX4S
#include <iostream>
#include <iomanip>
using namespace std;


 int main(void)
{
//Habilitar acentuação
 setlocale(LC_ALL, "pt_BR");
//Variáveis
 float A,B,SM,SB,M,D;
//Formatação das casas decimais
 cout<<setprecision(2);
 cout<<setiosflags(ios::right);
 cout<<setiosflags(ios::fixed);
//Entrada
     cout<<"Informe o valor da variável A ";cin>>A;
     cin.ignore(80, '\n');
     cout<<"Informe o valor da variável B ";cin>>B;
     cin.ignore(80, '\n');
//Processamento
         SM=A+B;
         SB=A-B;
         M=A*B;
         D=A/B;
//Saida
     cout<<A<<"+"<<B<<" "<<"="<<" "<<SM<<endl;
     cout<<A<<"-"<<B<<" "<<"="<<" "<<SB<<endl;
     cout<<A<<"x"<<B<<" "<<"="<<" "<<M<<endl;
     cout<<A<<"/"<<B<<" "<<"="<<" "<<D<<endl;
     cout<<endl<<"Pressione <Enter> para finalizar o programa "<<endl;
     cout<<endl;
     cin.get();
     return 0;
}     