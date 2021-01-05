/*
Aula: Exercicio #17
Data:21/12/2020
Grupo: reddit.com/r/heikoa 
Link: https://www.youtube.com/watch?v=UKrHWtGi7Zc
*/
#include <stdio.h>
int main(){

	int num1, num2;

	printf("Digite Dois numero: ");
	scanf("%i %i", &num1, &num2);

	if(num2 == 0)
		printf("Operacao com zero nao e permitido.\n");
	else {
		if(num1 % num2 == 0)
			printf("%i e divisivel por %i.\n", num1, num2);

		else
			printf("%i nao e divisivel por %i.\n", num1, num2);
		}

		return 0;
}