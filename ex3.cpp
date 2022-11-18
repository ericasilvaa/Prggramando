/*Ler as	medidas	das	duas dimensões	de	um retângulo
expressas	em	“cm”	e	calcular e	 escrever	as	medidas
	do	perímetro,	da	diagonal	e	da	área	dele.*/

#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;


int main ()
{
    SetConsoleOutputCP(65001);
    double x;
    int base, altura, perimetro, area, diagonal; 
    cout << "Digite as dimensoes da base do retangulo:" << endl;
    cin >> base;
    
    cout << "Digite as dimensoes da altura do retangulo:" << endl;
    cin >> altura;
    
    area= base*altura;
    cout << "A área do retangulo é: "<< area <<endl;

    perimetro= (2*base)*(2*altura);
    cout << "O perimetro do retangulo é: " << perimetro << endl;


    diagonal= (base*base)+(altura*altura); 

    cout << "A diagonal do retangulo é: "  << sqrt(diagonal) << "cm" << endl;


    


 

system ("pause");
return 0;
}






 