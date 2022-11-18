/*Criar	 um	 algoritmo	 que	 leia	 os	 limites	 inferior	 e	 superior	 de	 um	 intervalo	 e	
imprimir	todos	os	números	pares	no	intervalo	aberto	e	seu	somatório.	Suponha	que	
os	dados	digitados	são	para	um	intervalo	crescente.*/
 
#include <iostream>
using namespace std;
int main() 
{ 
    int liminferior, limsuperior,x; 
    float soma = 0; 
    cout<< "Informe o valor do limite inferíor: ";
    cin>> liminferior;
    
    cout << "\nInforme o valor do limite superior: ";
    cin>> limsuperior; 

 // verifica se o limite inferior digitado é par 
    if (liminferior % 2 == 0) 
 // se for par, soma 2 para começar com o próximo numero par 
    liminferior = liminferior + 2; 
    else 
 // se nao for par, aumenta 1 para ele ficar par 
    liminferior = liminferior + 1; 
    cout << endl; 
 // no limite superior subtrair 1 para ficar sempre com um numero 
 // menor que o limite superior digitado. 
    for (x=liminferior; x <= limsuperior -1; x=x+2) 
    { 
    cout << '\t' << x;
    soma = soma + x; 
    } 
    cout << endl << "\n Somatorio:" << soma << endl;
    cout << endl;
 system("pause"); 
 return 0; 
}