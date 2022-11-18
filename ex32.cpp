/*)	Solicitar	a	idade	de	várias	pessoas	e	imprimir:	Total	de	pessoas	com	menos	de	21	
anos.	Total	de	pessoas	com	mais	de	50	anos.	O	programa	termina	quando	idade	for	=	
-1 */
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{   SetConsoleOutputCP(65001);
    int idade, cont21=0, cont50=0;
    cout <<"Digite uma idade:";
    cin>> idade;
    while (idade!=-1)
    {
    if (idade<21)
        cont21++;
    if (idade>50)
        cont50++;
    cout << "Digite outra idade ou digite -1(PARA ENCERRAR O PROGRAMA)";
    cin>> idade;
    }
    cout<< "\t O total de pessoas com mais de 50 anos é : " <<cont50<< endl;
    cout<< "\t O total de pessoas com menos de 21 anos é : " <<cont21 << endl;
    return 0;
    system("pause");
}