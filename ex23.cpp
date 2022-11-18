/*ler	um	ano de	nascimento	e	ano	atual,	no	 formato	DD/MM/AAAA. Imprimir	a	
idade	da	pessoa.*/

#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
int main()
{   SetConsoleOutputCP(65001);
    char dias, anoN,diaN,mesN, idade, diaA,mesA,anoA, calculo, anos;
    int meses;    
    cout << "\nDigite o seu ano de nascimento em formato DD/MM/AAAA:\n";
    cin>> diaN >> mesN >> anoN;
    cout << "\nDigite o ano atual em formato DD/MM/AAAA: \n";
    cin>> diaA,mesA,anoA ;
    calculo= 365*anoA+ 30*mesA + diaA - 365* anoN -30*mesN- diaN;
    anos = calculo/365;
    calculo = calculo%365;
    meses = calculo/30;
    calculo = calculo%30;
    dias = calculo;
    cout<< "Voce tem" << anos << "anos," <<meses << "meses,  e" << dias << " dias de idade.";    
    //idade=ano_atual-ano_nasc;
    //cout<< "\nSua idade é: ";
     system ("pause");
return 0;
}

/*#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
int diaN, mesN, anoN, diaA, mesA, anoA, idade;
    
    cout <<" Informe a sua data de nascimento na seguinte configuracao: dd/mm/aaaa\n";
    scanf("%d/%d/%d", &diaN, &mesN, &anoN);
    cout <<" Informe a data atual na seguinte configuracao: dd/mm/aaaa\n";
    scanf("%d/%d/%d", &diaA, &mesA, &anoA);
    
    if ((mesN > mesA) || ((mesN = mesA) && (diaN > diaA)))
       idade = anoA - anoN - 1;
    else idade = anoA - anoN;
    
    printf("idade = %d", idade);
    getch();
system("pause");
} */