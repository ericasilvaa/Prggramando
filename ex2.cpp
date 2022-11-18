//Lista 1 questao2
/* Ler	os	três	algarismos	de	um	número	(das	unidades,	das	dezenas	e	das	centenas,	
nesta	ordem)	e	informar	qual	é	o	dobro	desse	número.*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main ()
{
    SetConsoleOutputCP(65001);
    int numeros, centena, dezena, unidade; 

    cout <<"\n Digite trés numeros:" ;
    cin >> numeros;
    cin.get();

    centena= numeros /100;
    unidade= (numeros % 100) % 10;
    dezena= (numeros % 100) / 10;
    

    cout <<"\n a unidade: " << unidade << endl;
    cout <<"\n a dezena: " << dezena << endl;
    cout <<"\n a centena: " << centena << endl;
    cout <<"\n o dobro do numero digitado é: " << numeros*2 << endl;


    system ("pause");

    return 0;
}
