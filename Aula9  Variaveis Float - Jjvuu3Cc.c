/*
Autor: d3dx939dll
Data: 14/12/2020
Aula De Hoje: Utilizando Variáveis do Tipo float 
Grupo: Heikoa
*/
#include <stdio.h>
int main()
{
	//int num1 = 5;
	//float num2 = 2;
	//float resultado;
	//resultado = num1 / num2;

	//metodo sem passar float nas variaveis int 
	int a = 5;
	int b = 2;
	float resultado = (float) a / b;

	
	printf("Valor: %f\n", resultado);
}