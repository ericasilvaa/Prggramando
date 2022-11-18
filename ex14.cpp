//	Ler	nome,	sexo	e	idade.
//	Se	sexo	for	feminino	e	idade	menor	que	25.
//	Imprimir onome	da	pessoa	e	a	palavra	ACEITA.	Caso	contrario	imprimir	NAO	ACEITA.*/

#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;

int main()
{ 
    SetConsoleOutputCP(65001);
    char nome[30],sexo;
    int idade;  
    cout << "Insira o seu nome: " ;
    cin >> nome;
    cout << "Insira o seu sexo, M-masculino F-feminino:  "; 
    cin >> sexo;
    cout << "Insira sua idade: " ;
    cin >> idade;

    if (sexo== 'F'|| sexo== 'f' && idade<25 ){    
        cout << nome <<endl << "ACEITA"; }
    else{ 
        cout << "NÃO ACEITA" << endl;}

system("pause");
return 0;

    }