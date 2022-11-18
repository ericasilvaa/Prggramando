/*Receber	um	número	do	teclado	e	informar	se	ele	é divisível	por	10,	por	5,	por	2	
ou	se	não	édivisível	por	nenhum	destes.*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{   SetConsoleOutputCP(65001);
    int numero;
    cout << "Digite um número: ";
    cin>> numero;
    if (numero % 10 ==0)
        cout<< "\tO número é divisil por 10." << endl;
    else if (numero % 5 ==0)
        cout << "\t O número é divisível por 5." << endl;
    else if (numero % 2 == 0)
        cout << "\t O numero é divisível por 2." << endl;
    else 
        cout << "\t Esse número não é divisível por 10, por 5,ou por 2." << endl;


system("pause");
return(0);
}

