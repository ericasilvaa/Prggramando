/* Ler	a	idade	de	uma	pessoa	e	informar	a	sua	classe	eleitoral.
a.	Não-eleitor	(abaixo	de	16	anos)
b.	Eleitor	obrigatório (entre	18	e	65	anos)
c.	Eleitor	facultativo	(entre	16	e	18	e	maior	de	65	anos)*/
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{   SetConsoleOutputCP(65001);
    int idade;
    cout << "Informe a sua idade: " << endl;
    cin >> idade;
    if (idade <16)
        cout<< "\tNão-eleitor" << endl;
    else if (idade>=18 && idade<=65)
        cout << "\t Eleitor obrigatório"<< endl;
    else if ((idade>=16 && idade<18) || (idade>=65))
            cout << "\tEleitor facultativo	" << endl;
    
    system("pause"); 
 return 0; 
 }