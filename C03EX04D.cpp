//C03EX4D Com algumas alterações
/* Programa para efetuar o calculo da quantidade de litros gastos em uma viagem,
apresentar quantos litros o carro faz por km, a velocidade media, tempo gasto na viagem, a distancia percorrida e velocidade media*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
//VARIAVEIS
    float LITROS_POR_KM, TEMPO, VELOCIDADE, DISTANCIA,LITROS_USADOS;
    char MARCA_DO_CARRO [40];
//FORMATAÇÃO CASAS DECIMAIS
    cout<<setprecision(2);
    cout<<setiosflags(ios::right);
    cout<<setiosflags(ios::fixed);
//ENTRADAS
    cout<< "Informe qual a marca do carro ";cin.getline(MARCA_DO_CARRO, sizeof(MARCA_DO_CARRO));
    cout<< "Quantos litros de gasolina por km o carro consome? ";cin>>LITROS_POR_KM;
    cin.ignore(80, '\n');
    cout<< "Quanto Tempo durou o trajeto? ";cin>>TEMPO;
    cin.ignore(80, '\n');
    cout<< "Qual foi a velocidade media do veiculo durante o trajeto em km por hora? ";cin>>VELOCIDADE;
    cin.ignore(80, '\n');
//PROCESSAMENTO
    DISTANCIA=TEMPO*VELOCIDADE;
    LITROS_USADOS=DISTANCIA/LITROS_POR_KM;

//SAIDA
    cout<< "MARCA DO CARRO"<<" "<<"="<<" "<<MARCA_DO_CARRO<<endl;
    cout<<endl;
    cout<< "O "<<MARCA_DO_CARRO<<" "<< "consome em media "<<LITROS_POR_KM<<" "<< "litros por KM."<<endl;
    cout<<endl;
    cout<< "A distancia percorrida foi de "<<" "<<DISTANCIA<<"km."<<endl;
    cout<<endl;
    cout<< "A velocidade media durante o trajeto foi de "<<" "<<VELOCIDADE<< "Km/h"<<endl;
    cout<<endl;
    cout<< "A trajeto durou "<<" "<<TEMPO<<"H"<<endl;
    cout<<endl;
    cout<< "Pressione <Enter> para finalizar o programa ";
    cin.get();
    return 0;
}

