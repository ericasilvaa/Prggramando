// Ler	uma	medida	de	ângulo	expressa	em	graus	e	calcular	e	escreve-la	em	radianos
#include <iostream>
#include <Windows.h>
#define pi 3.14
using namespace std;

int main ()
{
    SetConsoleOutputCP(65001);
    float medida, radianos;
    cout << "Digite a medida do ângulo em grau: "  << endl;
    cin>> medida;

    radianos = medida*pi/180;
    cout <<"A medida do arco em radianos  é: " << radianos << "rad" << endl;




    system ("pause");
return 0;
}