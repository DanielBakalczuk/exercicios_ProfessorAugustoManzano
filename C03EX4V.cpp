//C03EX4V.cpp
/*Leia 2 valores inteiros, que iram representar a  base e o expoente de um numero e apresentar o resultado*/
#include<iostream>
#include<cmath>
using namespace std;

 int main(void)
 {
//Habilitar acentuação
 setlocale(LC_ALL, "pt_BR");
//Variáveis
 int A,B,R;
//Entrada
     cout<<"Informe a base do numero ";cin>>A;
     cin.ignore(80, '\n');
     cout<<"Informe o expoente do numero ";cin>>B;
     cin.ignore(80, '\n');
//Processamento
         R=pow(A, B);
//Saída
    cout<<A<<"^"<<B<<" "<<"="<<" "<<R<<endl;
    cout<<endl;
    cout<<"Pressione <Enter> para finalizar o programa ";
    cin.get();
return 0;   
 }