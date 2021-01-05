/*
AULA: Fatorando numeros (#12)
DATA: 16/12/2020
Grupo: HEIKOA
*/
#include <stdio.h>

int main()
{
    int fatorial = 10;
    int resposta = 1;

    for ( ; fatorial >= 1; --fatorial){
        resposta *= fatorial;
    }

    printf("O Numero Faturado: %i", resposta);

    return 0;
}
