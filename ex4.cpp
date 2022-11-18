// Ler	a	medida	do	lado	de	um	quadrado,	expressa	em	metros.
//Calcular	a	área do quadrado externa	ao	círculo	inscrito	nele.

#include <iostream>
#include <math.h>
#include <Windows.h>
#define pi 3.14
using namespace std;

int main ()
{
    SetConsoleOutputCP(65001);
    float área, medida, raio;
    cout << "Digite a medida do lado de um quadrado : ";
    cin >> medida;

    raio= medida/2;
     
    área= pi* pow(raio, 2);     // area da circuferencia a=pi*r^2

    cout << "A área do quadrado externo ao circulo é: " << área << "metros" << endl;

system ("pause");
 return 0;

}

