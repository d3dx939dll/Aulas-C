#include <stdio.h>
 
 int main(void){
 	float notas[5] = {0};
 	float total = 0;
 	float media = 0;

 	printf(" = = = Insira Cinco Dados: = = =\n");

 	for(int i = 0; i < 5; ++i){

 		printf(">>");
 		scanf("%f", &notas[i]);
 	}
 	for (int i = 0; i < 5; ++i)
 		total += notas[i];

 	media = total / 5;

 	printf("A Media Do Aluno e  >>%f<<\n", media);

 	return 0;
 }

// Aula: Vetores Part III (#24)
// Data:30/12/2020
// Grupo: reddit.com/r/heikoa

// Referencia:

// Video: https://www.youtube.com/watch?v=GmTpl5VRA4s
