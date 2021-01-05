/*
Aula: Estrutura de Decisão (IF e ELSE)
Data: 17/12/2020
Grupo: Heikoa
*/
#include <stdio.h>

int main()
{

	int idade;

	printf("Digite sua Idade: ");
	scanf("%i", &idade);

	if(idade < 18){
		printf("Voce nao pode beber!\n");
	}
	else{
		printf("Oque Vai Querer Beber Patrao?\n");
	}

	return 0;
}