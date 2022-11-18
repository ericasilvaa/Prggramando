//Ler	uma	medida	de	temperatura	expressa	em	graus	Fahrenheit	(número	inteiro)	
//e	mostrá-la	em	graus	centígrados	(número	real).	 C=((F–32)	*(5/9.0))	

#include <iostream>
#include <Windows.h>
using namespace std;
#include <string>

int main ()
{
    SetConsoleOutputCP(65001);
    
    int temperatura, centígrados;
    cout << "Digite a medida da temperatura em Fahrenheit: " << endl;
    cin>> temperatura;

    centígrados= (temperatura-32)*(5/9.0);
    cout << "Os graus em centígrados é: " << centígrados << "ºC" << endl;

    

system ("pause");
return 0;
}



