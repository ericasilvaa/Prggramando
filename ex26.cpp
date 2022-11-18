//)	Apresentar	o	total	da	soma	obtida	dos	cem	primeiros	números	inteiros
#include <iostream>
#include <Windows.h>
using namespace std;


int main()
{ 
    SetConsoleOutputCP(65001);
    int i, soma=0;
    for (i=1; i<=100; i++)
        soma= soma+i;
        cout << " \n A soma dos 100 primeiros numero é: " << soma << endl;
        
     system ("pause");
return 0;
}