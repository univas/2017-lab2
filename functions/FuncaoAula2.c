#include<stdio.h>

int somar(int a, int b) {
	int resultado = a + b;
	printf("resultado: %i\n", resultado);//pode??? SIM!!!
	return resultado;
	//printf("resultado: %i\n", resultado);//pode??? NÃO!!! Porque está DEPOIS do return
}

int main() {
	int resposta = somar(2, 3);
	printf("resposta da soma: %i\n", resposta);
	system("pause");
}
