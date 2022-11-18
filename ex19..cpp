//Ler	dez	números e	o	que	for	maior	que	20	imprimir	a	metade	desse	número
#include <stdio.h>
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {      
    SetConsoleOutputCP(65001);
    float num;
    int contador;
        contador=1;
        while (contador<=5)
        {
                cout<<"\nDigite o um numero:";  //Ler	dez	números
                cin>> num;
                contador++;
        }                 
        if (num>20)
            cout<< "A  metade desse numero é:  "<< num/2 << endl;   //for	maior	que	20	imprimir

system ("pause");     
}



//imcompleto