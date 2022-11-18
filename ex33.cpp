/*Entrar	 com	 nome,	 nota	 da	 PR1	 e	 nota	 da	 PR2 de	 15	 alunos.	 Imprimir	 uma	
listagem,	contendo:	nome,	nota	da	PR1,	nota	da	PR2	e	média	de	cada	aluno.	Ao	final,	
calcule	a	média	geral	da	turma*/
#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{   SetConsoleOutputCP(65001);
    char nome[30];
/*  float PRI  */
    float i, nota1, nota2, media, nota=0;

    cout << "** Pesquisa de média geral da turma **\n ";
    cout << endl;
    cout <<"\t - Informe nome\n";
    cout <<"\t - Nota da PR1\n";
    cout <<"\t - Nota da PR2\n";
    
    for(i=1; i<=4; i++)
    {
        cout<< "Digite o nome do aluno: \n";
        cin>> nome;
        cout<< "Digite a nota da PR1: \n";
        cin>> nota1;
        cout << "Digite a nota da PR2: \n";
        cin>> nota2;
    }

/*Media de cada aluno  */
    media=nota1+nota2/2;

    cout<<"\nA media das idades das pessoas que responderam otimo...: "<< media;

system("pause");
return 0;
}

