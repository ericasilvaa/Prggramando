//	Receber	um	valor	qualquer	do	teclado	e	imprimir	esse	valor	com	reajuste	de	10%.
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    system("cls");
    float num, reajuste, calculo;
    cout << "\nDigite um numero qualquer:\n " ;
    cin >> num;

    calculo=num*10/100;
    reajuste=num+calculo;
    
    cout << "o numero digitado com reajuste de 10% é: "<< reajuste << endl;
    
system ("pause");
return 0;
}