/*Ler	dois	valores	A	e	B.	Efetuar	a	troca	dos	conteúdos	dos	mesmos	na	memória	e	
mostrar	os	valores	trocados*/


#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{ 
    SetConsoleOutputCP(65001);
    int A ,B;
    cout << "Dígite o valor de A: ";
    cin >> A;

    cout << "Dígite o valor de B: ";
    cin >> B;

    cout << "\n O valor de A é: " << B << endl ;
    cout << "\n O valor de B é: " << A << endl ;
    

   system ("pause");
return 0;
}