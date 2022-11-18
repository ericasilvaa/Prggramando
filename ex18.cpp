//	Informar	um	preço	de	um	produto	e	calcular	novo	preço	com	desconto	de	9%
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    float preço, desconto, calculo;
    cout << "\nDigite o preço do produto:\n " ;
    cin >> preço;

    calculo=preço*9/100;
    desconto=preço-calculo;

    cout << "O preço do produto com 9% de desconto é : "<< desconto << endl;
    
system ("pause");
return 0;
}