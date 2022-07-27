//C03EX4G.cpp
/*Ler 4 valores inteiros e apresentar os resultados da das adições e multiplicações 
entre esses valores, utilizando a propriedade distributiva para  realizar todas as 6 combinações possíveis*/
  #include <iostream>
  using namespace std;


  int main(void)
  {
//VARIÁVEIS
     int A,B,C,D;
     int A1,A2,A3,A4,A5,A6;
     int M1,M2,M3,M4,M5,M6;
//ENTRADA
    cout<<"informe o valor A ";cin>>A;
    cin.ignore(80, '\n');
    cout<<"informe o valor B ";cin>>B;
    cin.ignore(80, '\n');
    cout<<"informe o valor C ";cin>>C;
    cin.ignore(80, '\n');
    cout<<"informe o valor D ";cin>>D;
    cin.ignore(80, '\n');
//PROCESSAMENTO
      A1=A+B;
      A2=A+C;
      A3=A+D;
      A4=B+C;
      A5=B+D;
      A6=C+D;
      M1=A*B;
      M2=A*C;
      M3=A*D;
      M4=B*C;
      M5=B*D;
      M6=C*D;
//SAIDA
    cout<<A<<"+"<<B<<"="<<A1<<endl;
    cout<<A<<"+"<<C<<"="<<A2<<endl;
    cout<<A<<"+"<<D<<"="<<A3<<endl;
    cout<<B<<"+"<<C<<"="<<A4<<endl;
    cout<<B<<"+"<<D<<"="<<A5<<endl;
    cout<<C<<"+"<<D<<"="<<A6<<endl;
    cout<<A<<"*"<<B<<"="<<M1<<endl;
    cout<<A<<"*"<<C<<"="<<M2<<endl;
    cout<<A<<"*"<<D<<"="<<M3<<endl;
    cout<<B<<"*"<<C<<"="<<M4<<endl;
    cout<<B<<"*"<<D<<"="<<M5<<endl;
    cout<<C<<"*"<<D<<"="<<M1<<endl;
    cout<<"Pressione <Enter> para finalizar o programa. ";
    cin.get();
    return 0;

  }
