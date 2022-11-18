//	Ler	nome,	endereço,	telefone	e	imprimir

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    string nome, endereço, telefone;

    cout << "Digite seu nome: " ;
    cin >> nome;

    cout << "Digite o seu endereço: "; 
    cin >> endereço;

    cout << "Digite o seu telefone: " ;
    cin >> telefone;

    cout << nome << endl << endereço << endl << telefone << endl;
    system ("pause");
return 0;
}
