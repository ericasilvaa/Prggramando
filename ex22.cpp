//	Ler	um	numero	e	imprimir:	maior	que	20,	igual	a	20	ou	menor	que	20.
#include <iostream>
#include <Windows.h>
using namespace std;

int main(void)
{ 
    SetConsoleOutputCP(65001);
    float num;
    cout << "Insira um numero :";
    cin>> num;

    if (num>20){ 
        cout<< "\nO numero é maior que 20";}
    else 
        if(num<20){ 
        cout<< "\nO numero é menor que 20";}
    else 
        cout<< "\nO numero é igual que 20";
    cout << endl;

return 0;
system ("pause");
}
