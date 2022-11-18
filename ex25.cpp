//Apresentar	os	quadrados	dos	números inteiros	de	15	a	200.
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{ 
    SetConsoleOutputCP(65001);
    int i, soma=0;
    for (i=15; i<=200; i++){ 
        cout << " \n O quadrado de " << i << "  é \t " << i*i << endl;}
        
     system ("pause");
return 0;
}
