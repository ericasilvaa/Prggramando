/*Ler	 2	 números	 inteiros	 e	 soma-los.	 Se	 a	 soma	 for	 maior	 que	 10,
 mostrar	 o	resultado	da	soma*/
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{ 
    SetConsoleOutputCP(65001);
    float numero1,numero2, soma;
    cout<< "Digite o primeiro numero inteiro: ";
    cin>> numero1;
    cout<< "Digite o segundo numero inteiro: ";
    cin>> numero2;
    
    soma=numero1+numero2;
    if ((soma)>10)                                                            
        cout << "A soma é:" <<soma ;
    else
        cout<< "\tFIM DE PROGRAMA \n";

system ("pause");
return 0;
}
