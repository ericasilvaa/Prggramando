/*Escrever	um	programa	que	receba	vários	números	inteiros	no	teclado.	E	no	final	
imprimir	a	média	dos	números	múltiplos	de	3.	Para	sair	digitar	0(zero).*/
#include <windows.h>
#include <iostream>
using namespace std;

int main() 
{   SetConsoleOutputCP(65001);
    int num, soma=0; 
    float media=0, cont=0; 
    cout <<"\n DIGITE UM NUMERO INTEIRO: "; 
    cin>> num; 
    while(num!=0)
    { 
        cout <<"\n DIGITE UM NUMERO INTEIRO: "; 
        cin>> num;
    if(num % 3==0 && num!=0) 
    { 
    soma=soma+num; 
    cont++; 
    }   
    media=soma/cont; 
    }
    cout <<"\n\tA média dos números é:  " << media<< endl; 

 system("pause"); 
 return(0); 
}