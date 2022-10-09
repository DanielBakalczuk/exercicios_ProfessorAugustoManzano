//C05EX01C.cpp
/*Construir um programa que apresente a soma dos cem primeiros números naturais (laço pre teste, enquanto)*/
#include <iostream>
#include <clocale>
using namespace std;

int main (void)
{
    setlocale(LC_ALL, "pt_BR, UTC-8");

    int i, s;
    i=1;
    s=0;
        while (i<=100)
        {
            s=s+i;
            ++i;
        }
    cout<<"A soma dos 100 primeiros números naturais é "
        <<"="
        <<" "
        <<s
        <<endl;
    cout<<endl;
    cout<<"Pressione <Enter> para finalizar o programa";
    cin.get();
    return 0;
    

        
}
