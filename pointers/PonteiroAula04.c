#include<stdio.h>
#include<stdlib.h>

void printVector(int * vet, int amount) {
     int i;
     printf("Conteúdo do vetor: \n");
     for(i = 0; i < amount; i++) {
         printf("Endereço da posição %i do vetor: %p\n", i, vet);
         printf("%i\n", *vet);
         vet++;
     }
     printf("\n");
}

int main(){
    int vector[7] = {10, 20, 30, 40, 50, 60, 70};
    printf("Início - Endereço do vetor: %p\n", vector);
    
    printVector(vector, 7);
    
    printf("Fim - Endereço do vetor: %p\n", vector);

    system("pause");
}
