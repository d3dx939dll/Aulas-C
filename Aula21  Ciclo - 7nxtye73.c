/*
Aula: Ciclo Por Ciclo (#21)
Data: 27/12/2020
Grupo: reddit/r/heikoa
*/
#include <stdio.h>

int main(void){
	
	for(int i; i <= 10; ++i){
		printf("**Volta %i**\n", i);
		for(int j; j <= 10; ++j){
			printf("Ponto %i\n", j);
		}
		printf("\n");
	}
	return 0;
}

