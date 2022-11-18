/*Ler	o	tempo	e	a	velocidade	média	de	um	carro	em	uma	viagem.	Sabendo	que	ele	
percorre	12	 km	com	um	litro	de	combustível,	calcular	e	mostrar	quantos	litros	de	
combustível	ele	gastou	na	viagem.*/

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{ 
    SetConsoleOutputCP(65001);
    float velocidade, média, tempo, combustivel, distância;
    cout << "Digite o tempo da viagem: " ;
    cin>> tempo;
    
    cout << "Digite a velocidade média do carro: " ; 
    cin>> velocidade; 
    distância= tempo*velocidade;
    combustivel= distância/12;  //   12km  é o consumo litro	por litro de	combustível

    cout<< "A quantidade de combustivel gasto nessa viagem foi: " <<endl << combustivel <<   "litros" <<endl;
        
   system ("pause");
return 0;
}
