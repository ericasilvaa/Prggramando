/*Fazer	 um	 programa	 que	imprima	 a	média	 aritmética	 dos	 números	 8,	 9	 e	 7.	 A	
media	dos	números	4,	5	e	6.	A	soma	das duas	médias.	A	media	das	medias*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    float media1,media2, soma, med_medias;

    media1=(7+8+9)/3;        //média  aritmética	 dos	 números	 8,	 9	 e	 7
    media2=(4+5+6)/3;        // média aritmética	 dos	 números	 4,	 5	 e	 6
    soma= media1+media2;
    med_medias=soma/2;

    cout << "\n A media aritmédica dos números 7,8 e 9 é:\n " << media1 ;
    cout << "\nA media aritmédica dos números 4,5 e 6 é:\n " << media2;
    cout << "\nA soma das duas médias:\n " << soma;
    cout << "\nA média das medias é:\n " << med_medias << endl;

system ("pause");
return 0;
}