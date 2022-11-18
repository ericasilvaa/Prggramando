/*Solicitar	salário	e	prestação.	Se	prestação	for	maior	que	20%	do	salário,	imprimir:	
Empréstimo	 não	 pode	 ser	 concedido.	 Senão	 imprimir:	 Empréstimo	 pode	 ser	
concedido*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{ 
    SetConsoleOutputCP(65001);
    float salario, porcetagem, prestação;
    cout << "Digite o salário do empregado; ";
    cin>> salario;
    
    cout << "Digite o valor da prestação; ";
    cin>> prestação;

    porcetagem=salario*0.20;
    if (prestação>porcetagem)
        cout<< "\tEmpréstimo não pode ser concedido.";

    else
        cout<< "\t\nEmpréstimo  pode ser concedido";
    cout << endl;
    

system ("\npause");
return 0;
}
