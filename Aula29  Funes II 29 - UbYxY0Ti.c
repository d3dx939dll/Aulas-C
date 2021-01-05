#include <stdio.h>

int main(void){

	//declarando nossa funcao
	float calcularAreaRetang(float x, float y);

	//colocando valor na funcao
	float area = calcularAreaRetang(10.00, 20.0);

	//resposta
	printf(" = = = Funcao = = =\n");
	printf("A area eh: %f\n", area);

	return 0;
}

//funcao braba
float calcularAreaRetang(float base, float altura){
	//definindo a ideia da funcao + variavel
	float area = base * altura;

	//seu retorno e sua variavel
	return area;
}

//Sobre

//Aula: Funções II (#29)
//Data: 05/01/2021
//Grupo: reddit.com/r/heikoa

//Referencia:

//Video: https://www.youtube.com/watch?v=Ewe0IHVMedQ

