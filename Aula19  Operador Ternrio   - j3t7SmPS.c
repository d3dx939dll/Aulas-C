/*
Aula: Comando "?"
Data: 23/12/2020
Link: https://www.youtube.com/watch?v=_LFw4H_Zfyc&t=65s
Grupo: Heikoa
*/
#include <stdio.h>
int main()
{
    int num1 = 10;
    int num2 = 20;

    int resposta;

    num1 < num2 ? printf("sim\n") : printf("nao\n");
    num1 < num2 ? resposta = 10 : resposta  = -10;
   
    printf("%i\n", resposta);

    return 0;
}
