 //Calcule e mostre o salário bruto e o líquido de um empregado, sendo dados através do	teclado:
//a)	 o	número	de	horas	trabalhadas	no	mês;	
//b)	 o	valor	do	salário-hora;	
//c)	 o	percentual	de	desconto	do	INSS,	sobre	o	salário	bruto.	

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{ 
   SetConsoleOutputCP(65001);
   float horas, salário_hora, percentual, salário_bruto, salário_líquido,desconto ;

   cout << "Digite o número de horas trabalhas no mês: \n ";
   cin>> horas;

   cout << "Digite o valor do salário-hora: \n ";
   cin>> salário_hora;

   cout << "Digite o percentual de desconto do INSS, sobre o salário	bruto: \n ";
   cin>> percentual;

   
   salário_bruto= salário_hora*horas;
   desconto= salário_bruto*percentual/100;
   salário_líquido= salário_bruto-desconto; // Colocar 14% para diminuir no salario
   
   cout << "O salário bruto do funcionario é: " << salário_bruto << endl;
   cout << "O salário liquido do funcionario é " << salário_líquido << endl;


   system ("pause");
return 0;
}