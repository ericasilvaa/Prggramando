/*Elaborar	 um	 programa	 que	 efetue	 a	 leitura	 sucessiva	 de	 valores	 numéricos	 e	
apresente	no	final	o	total	do	somatório,	a	média	e	o	total	de	valores	lidos.	O	programa	
deve	 fazer	 as	 leituras	 dos	 valores	 enquanto	 o	 usuário	 estiver	 fornecendo	 valores	
positivos.	 Ou	 seja,	 o	 programa	 deve	 parar	 quando	 o	 usuário	 fornecer	 um	 valor	
negativo*/
 
#include <iostream>
#include <windows.h>
using namespace std;
int main() 
{   SetConsoleOutputCP(65001);
    int  media=0, numero=0, total=0; 
    float soma = 0; 
    while (numero> 0) 
    { 
    cout <<"Informe um valor numéricos : "; 
    cin>> numero;
    if (numero > 0)
    soma=soma+numero; 
    total = total + 1;
    media=soma/total;
    } 
    cout<< "\t A soma é  " << soma << "\n\t E a média é  " << soma/total << endl; 
   
system("pause");
return 0;
}
