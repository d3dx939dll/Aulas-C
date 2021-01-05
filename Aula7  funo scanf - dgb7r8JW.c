/*
Autor: d3dx939dll
Data: 12/12/2020
Grupo: Heikoa
Aula De hoje: Função Scanf
*/
#include <stdio.h>
int main()
{
	int base;
	int altura;
	int area;
	
	printf("Base:");
	scanf("%i", &base);
	printf("Altura: ");
	scanf("%i", &altura);
	
	area = base * altura;
	printf("Valor: %i", area);
	
	return 0;
	
}