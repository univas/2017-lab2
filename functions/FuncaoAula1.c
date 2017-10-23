#include<stdio.h>
#include<stdlib.h>

//definição da função
//int >>> tipo de retorno
//multiplicaPorDois >>> nome da função (sem espaço)
//int x >>> primeiro parâmetro
//os parâmetros são opcionais
int multiplicaPorDois(int x) //assinatura da função
{//início do bloco da função
	int resposta; //declaração simples de uma variável
	resposta = x * 2; //cálculo simples
	return resposta; //retorna o valor da variável resposta 
}//fim do bloco da função

float dividePorDois(int x) //assinatura da função
{//início do bloco da função
	float resposta; //declaração simples de uma variável
	resposta =  x / 2.0; //cálculo simples
	return resposta; //retorna o valor da variável resposta 
}//fim do bloco da função

//exercício 1: criar uma função que divide por dois
//exercício 2: criar uma função que soma dois números (parâmetros) e 
//               retorna o resultado

int main() { //função main
	int i;
	int resultadoMult;
	float resultadoDiv;
	for(i = 1; i <= 10; i++) {
		resultadoDiv = dividePorDois(i);
		resultadoMult = multiplicaPorDois(i);
		printf("i: %i div: %f mult: %i\n", i, resultadoDiv, resultadoMult);
	}
	system("pause");
}
