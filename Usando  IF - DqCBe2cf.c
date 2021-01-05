/*
usando o if kkk
*/
#include <stdio.h>
int main()
	{
		int numero = 1;
		int var = 0;

		printf("Escolha: \n1 - For\n2 - While\n3 - Sair\n");
		printf("Opcao: ");
		scanf("%i", &var);

		if(var == 1){
			for(numero = numero ; numero <= 10; numero = numero + 1){
				printf("FOR: %i\n", numero);

			}
		}
		if(var == 2){
			while(numero <= 10){
				printf("While: %i\n", numero);
				++numero;
			}
		}
		if(var == 3){
			printf("\nSaindo, Fodase...\n");
		}
	return 0;
}