//Ler	 uma	medida	 de	 tempo	 dada	 em	 segundos	 e	 escrever	 esta	mesma	medida	
//expressa	em	horas,	minutos	e	segundos,	no	formato	H:M:S.	Por	exemplo:	se	a	medida	
//for	5000	segundos,	teremos:	1:23:20

#include <iostream>
#include <Windows.h>
using namespace std;

int main ()
{
    SetConsoleOutputCP(65001);
    int  tempo, segundos, minutos, horas;
                                         
    cout << "Digite o tempo em segundos:" << endl;
    cin>> tempo;
    
    horas= tempo/3600;
    minutos= (tempo-(3600*horas))/60; 
    segundos= (tempo-(3600*horas)- (minutos*60));
    cout << "Esses segundo expresso em horas é: " << endl << endl;
    cout << horas  << "h :" << minutos << "m :" << segundos << "s" << endl;

    system ("pause");
return 0;
}
