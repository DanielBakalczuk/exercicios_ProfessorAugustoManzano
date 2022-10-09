#include <iostream>
using namespace std;

int main(void)
{
    string NOME;
    char SEXO;

    cout << "informe o seu nome ";
    getline(cin, NOME);
    cout << "informe seu sexo: digite M para masculino e F para feminino ";
    cin >> SEXO;
    cin.ignore(80, '\n');
    if (SEXO == 'M' || SEXO == 'm' || SEXO == 'F' || SEXO == 'f')
    
    {
        if (SEXO == 'M' || SEXO == 'm')
        {
            cout << "Ilmo, Sr. "
                 << NOME
                 << endl;
        }
        else
        {
            {
                cout << "Ilma, Sra "
                     << NOME
                     << endl;
            }
        }
    }
    else
    {
        cout << "Sexo informado invalido "
             << endl;
    }
    
    cout<<"pressione <Enter> para finalizar o programa ";
    cin.get();
    return 0;
}
