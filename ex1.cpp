//Primeiro programa 
#include <iostream>
#include <Windows.h>
using namespace std;
//Ler um número inteiro e mostrar o seu sucessor e o seu antecessor.


int main ()
{
    SetConsoleOutputCP(65001);

    int num, sucessor, antecessor;
    
    
    cout <<  "\n Escreva um número inteiro: " ;
    cin >> num;
    
    sucessor=num+1;
    antecessor=num-1; 
        
    
    cout << "\n o seu sucessor é :" << sucessor << endl;
    cout << "\n o seu  antecessor de é : " << antecessor << endl << endl; 
    
    system ("pause");
 return 0;
 }