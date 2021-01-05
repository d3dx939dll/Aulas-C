/*
Aula De Hoje: Programar em C - Como Utilizar Múltiplos "else if"
Link: https://youtu.be/hzguWLxdEb0
Data: 19/12/2020
Grupo: reddit.com/r/heikoa
*/
#include <stdio.h>

int main()
{
        int idade;
        printf("Idade:");
        scanf("%i", &idade);

        if(idade <= 5)
                printf("Bebê\n");
        else if(idade > 5 && idade <= 10)
                printf("Criança\n");
        else if (idade > 10 && idade <= 18)
                printf("Adolescente\n");
        else if (idade > 18 && idade <= 50)
                printf("Adulto\n");
        else
                printf("IDOSO\n");

        return 0;

}

/*
Novos Ensinamentos:

else if ->  Na adicao de um "if", sempre adicionar "else if", para multi seleções.
&& -> no portugues "é", um incremento dentro da estrutura de decisão para adicionar algum elemento.
*/
