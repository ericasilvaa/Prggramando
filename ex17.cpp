//	Informar	três	números	inteiros	e	imprimir	a	média.
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    float  pri, seg, ter, media;
    cout << "\nInsira o primeiro numero inteiros:\n " ;
    cin >> pri;
    cout << "\nInsira o segundo numero inteiros:\n " ;
    cin >> seg;
    cout << "\nInsira o terceiro numero inteiros:\n " ;
    cin >> ter;


    media= (pri+seg+ter)/3;
    cout<< "A media dos numeros dos 3 numeros interios é: "<< media << endl;

system ("pause");
return 0;
}