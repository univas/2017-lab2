#include<stdio.h>
#include<stdlib.h>

//criar uma fun��o para ler um valor do teclado
//declarar a vari�vel no main e passar seu ponteiro para a fun��o
void lerValor(int * ponteiro) {
    scanf("%i", ponteiro);
}

int main() {
    int valor;
    int * pValor;
    pValor = &valor;
    
    //daqui para baixo n�o usa mais a vari�vel valor
    
    lerValor(pValor);
    
    printf("Valor: %i\n", *pValor);
    printf("Endere�o de valor: %p\n", pValor);
    system("pause");
}
