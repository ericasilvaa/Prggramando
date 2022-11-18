/* No	 dia	 da	 estreia	 do	 filme	 “Senhor	 dos	 Anéis”,	 uma	 grande	 emissora	 de	 TV	
realizou	 uma	 pesquisa	 logo	 após	 o	 encerramento	 do	 filme.	 Cada	 espectador	
respondeu	a	uma	questionário	no	qual	constava	sua	idade	e	a	sua	opinião	em	relação	
ao	filme:	excelente	– 3;	bom	– 2;	regular	– 1.
-Criar	um	algoritmo	que	receba	a	idade	e	
a	opinião	de	20	espectadores,	calcule	e	imprima  a	média	das	idades	
e	a	percentagem	das	pessoas	que	responderam	excelente,	bom	e	regular.*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
   int i, idade, opiniao;
   float perc_bom, media_idade,op1=0, op2=0, op3=0, cont3=0;

   cout << "** Pesquisa de Opiniao **\n ";
   cout << endl;
   cout <<"\t[1] Regular\n";
   cout <<"\t[2] Bom\n";
   cout <<"\t[3] Otimo\n";

   for (i=1;i<=20;i++)
   {
       cout<<"Idade: ";
       cin>> idade;
       cout <<"Opiniao: ";
       cin>> opiniao;
       cout << endl;

       if(opiniao==1){
       op1 = op1 + 1;
       }
       if(opiniao==2){
       op2 = op2 + 1;
       }
       if(opiniao==3){
       op3 = idade + op3;
       cont3 = cont3++;
       }
   }

/* Media das idades das pessoas que responderam otimo */
   media_idade = op1+op2+op3+cont3/20;

/* Percentagem das pessoas que responderam BOM entre todos os espectadores analisados */
   perc_bom = ((float)op2 / 20) * 100;

    cout <<"\nA media das idades das pessoas que responderam otimo...: "<< media_idade;
    cout <<"\nA quantidade de pessoas que respondeu regular..........: "<< op1;
    cout <<"\nA percentagem de pessoas que respondeu BOM entre todos os espectadores analisados..: "<< endl<< perc_bom;

system ("pause");
return 0;

}