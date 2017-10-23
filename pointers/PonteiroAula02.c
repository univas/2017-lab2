#include<stdio.h>
#include<stdlib.h>

//criar uma função para ler um valor do teclado
//declarar a variável no main e passar seu ponteiro para a função
void lerValor(int * ponteiro) {
    scanf("%i", ponteiro);
}

int main() {
    int valor;
    int * pValor;
    pValor = &valor;
    
    //daqui para baixo não usa mais a variável valor
    
    lerValor(pValor);
    
    printf("Valor: %i\n", *pValor);
    printf("Endereço de valor: %p\n", pValor);
    system("pause");
}
