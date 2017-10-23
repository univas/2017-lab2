#include<stdio.h>

int somar(int a, int b) {
	int resultado = a + b;
	printf("resultado: %i\n", resultado);//pode??? SIM!!!
	return resultado;
	//printf("resultado: %i\n", resultado);//pode??? NÃO!!! Porque está DEPOIS do return
}

int subtrair(int a, int b) {
    return a - b; //pode fazer direto e já retornar? SIM !!!
}

int multiplicar(int a, int b) {
    int resultado = a * b;
    return resultado;   
}

int dividir(int a, int b) {
    if(b == 0) {
         return -1;//um valor que indica erro na divisão
    }
    return a / b;
}

int calcular(int a, int b, char opcao) {
    int resultado;
    switch(opcao) {
        case 'O':
           resultado = somar(a, b);
           break;
        case 'U':
           resultado = subtrair(a, b);
           break;
        case 'M':
           resultado = multiplicar(a, b);
           break;
        case 'D':
           resultado = dividir(a, b);
           break;
    }
    return resultado;
}

int main() {
	int respostaSoma = somar(2, 3);
	printf("Resposta da soma: %i\n", respostaSoma);
	int respostaMult = multiplicar(3, 5);
	printf("Resposta da multiplicação: %i\n", respostaMult);
	int respostaSub = subtrair(8, 7);
    printf("Resposta da subração: %i\n", respostaSub);
    int respostaDiv = dividir(256, 8);
    printf("Resposta da divisão: %i\n", respostaDiv);

    //chamando a função calcular
    int resultado = calcular(2, 3, 'O');
    printf("Resultado do 'O': %i\n", resultado);

    resultado = calcular(2, 3, 'U');
    printf("Resultado do 'U': %i\n", resultado);

    resultado = calcular(2, 3, 'M');
    printf("Resultado do 'M': %i\n", resultado);

    resultado = calcular(20, 3, 'D');
    printf("Resultado do 'D': %i\n", resultado);

    //o que vai acontecer aqui???
    //e o que precisa ser corridigo no código???
    resultado = calcular(15, 0, 'D');
    printf("Resultado do 'D': %i\n", resultado);

	system("pause");
}
