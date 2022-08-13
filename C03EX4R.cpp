//C03EX4R
/* eleição de 3 candidatos,  calcular a quantidade de votos para cada candidato, numero de votos brancos e nulos*/
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
//habilitando acentuação
setlocale(LC_ALL,"Portuguese");
//variaveis
    int A,B,C,VB,VN;
//entrada
      cout<<"Informe o numero de votos que o candidato A recebeu ";cin>>A;
      cin.ignore(80,'\n');
      cout<<"Informe o numero de votos que o candidato B recebeu ";cin>>B;
      cin.ignore(80,'\n');
      cout<<"Informe o numero do votos que  o candidato C recebeu ";cin>>C;
      cin.ignore(80, '\n');
      cout<<"Informe o numero de votos em braco ";cin>>VB;
      cin.ignore(80, '\n');
      cout<<"Informe o numero de votos nulos ";cin>>VN;
      cin.ignore(80,  '\n');
//saida
      cout<<"O candidato A recebeu "<<A<<" "<<"votos ";
      cout<<"O candidato B recebeu "<<B<<" "<<"votos ";      
      cout<<"O candidato C recebeu "<<C<<" "<<"votos ";
      cout<<"Teve "<<VB<<"votos em branco ";
      cout<<"Teve "<<VN<<"votos nulos "<<endl;
      cout<<endl; 
     cout<<"Pressione <Enter> para finalizar o programa ";
     cin.get();
     return 0;
}
