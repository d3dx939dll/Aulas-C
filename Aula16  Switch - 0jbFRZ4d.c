/*
Aula: Switch (#16)
Data: 20/12/2020
Grupo: reddit.com/r/heikoa
*/
#include <stdio.h>

int main()
{
	int i;
	
	printf("De 1 a 5: ");
	scanf("%i", &i);

	switch(i){

		case 1:
			printf("Um\n");
			break;
		case 2:
			printf("Dois\n");
			break;
		case 3:
			printf("Tres\n");
			break;
		case 4:
			printf("Quatro\n");
			break;
		case 5:
			printf("Cinco\n");
			break;
		default:
			printf("Invalido!\n");
			break;
	}

	return 0;	
}
