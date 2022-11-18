/*Elaborar	um	programa	que	efetue	a	leitura	de	valores	positivos	inteiros	até que	
um	valor	negativo	seja	informado.	Ao	final	devem	ser	apresentados	o	maior	e	menor	
valores	informados	pelo	usuário*/
#include <iostream> 
#include <windows.h>
using namespace std;

int main()
{   SetConsoleOutputCP(65001);
    int numero=0, maior=0, menor=0;
    while (numero>=0)
    {
        cout <<"Digite um número positivo ou um negativo para parar: "; 
        cin >> numero;
    if(numero>0)
    {
        if(numero>maior)
        maior=numero;
        if(numero<menor)
        menor=numero;
    }
    else
        menor=numero;}

    cout <<"\tO numero maior é "<< maior <<"\n \tE o menor é "<< menor << endl;

 system("pause"); 
 return 0; 
}