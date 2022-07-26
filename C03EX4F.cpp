//C03EX4F.cpp
/*LER A e B, APRESENTAR AS VARIAVEIS COM OS VALORES TROCADOS*/
  #include<iostream>
  using namespace std;


  int main(void)
  {
//VARIAVEIS
      float A,B,X;
//ENTRADA
      cout<< "Informe o valor A ";cin>>A;
      cin.ignore(80, '\n');
      cout<< "informe o valor B ";cin>>B;
      cin.ignore(80, '\n');
//PROCESSAMENTO
      X=A;
      A=B;
      B=X;
//SAIDA
      cout<< "A"<< " "<< "="<< " "<< A<< endl;
      cout<<endl;
      cout<< "B"<< " "<< "="<< " "<< B<< endl;
      cout<<endl;
      cout<< "Pressione <Enter> para finalizar o programa ";
      cin.get();
      return 0;

  }
