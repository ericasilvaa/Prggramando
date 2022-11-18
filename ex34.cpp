/*Criar	um	algoritmo	que	receba	a	idade	e	o	peso	de	20	pessoas.	Calcular	e	imprimir	
as	médias	dos	pesos	das	pessoas	da	mesma	faixa	etária.	As	faixas	etárias	são:	de	1	a	
10	anos,	de	11	a	20	anos,	de	21	a	30	anos	e	maiores	de	30	anos*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{   SetConsoleOutputCP(65001);
    float i,p,med1,med2,med3,med4,soma,y;
    int x;
    soma=0;
    y=0;
    for(x=1;x<=20;x++){
        cout<<"\nDigite a idade da pessoa: ",x;
        cin>> i;
        cout <<"Digite o peso da  pessoa: ",x;
        cin>> p;
        cout<<"\n_____________________________________________\n";
        if(i>=1 && i<=10){
                y=y+1;
                soma=soma+p;
                med1=soma/y;

        }
        if(i>=11 && i<=20){
                y=y+1;
                soma=soma+p;
                med2=soma/y;

        }
        if(i>=21 && i<=30){
                y=y+1;
                soma=soma+p;
                med3=soma/y;

        }
        if(i>=31){
                y=y+1;
                soma=soma+p;
                med4=soma/y;}
    }

cout<<"\nA media dos pesos das pessoas entre 1 e 10 anos   = \n\t"<< med1;
cout<<"\nA media dos pesos das pessoas entre 11 e 20 anos  = \n\t"<<med2;
cout<<"\nA media dos pesos das pessoas entre 21 e 30 anos  = \n\t"<<med3;
cout<<"\nA media dos pesos das pessoas maiores ou iguais 31 anos = \n\t"<<med4 << endl;



system("pause");
return 0;
}