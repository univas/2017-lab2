#include<stdio.h>
#include<stdlib.h>

int somaElementosDoVetor(int vetor [5]) {
    //exercício: escrever o código para somar os elementos do vetor
    int somatorio = 0;
    int i;
    for(i = 0; i < 5; i++) {
          somatorio += vetor[i];
    }
    return somatorio;
}

int main() {
    int vet[5] = {2 ,4, 6, 8, 10};
    
    int soma = somaElementosDoVetor(vet);
    
    printf("Resultado da soma do vetor: %i\n", soma);
    
    system("pause");
}
