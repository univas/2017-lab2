#include<stdio.h>
#include<stdlib.h>

void printVector(int * vet, int amount) {
     int i;
     printf("Conte�do do vetor: \n");
     for(i = 0; i < amount; i++) {
         printf("Endere�o da posi��o %i do vetor: %p\n", i, vet);
         printf("%i\n", *vet);
         vet++;
     }
     printf("\n");
}

int main(){
    int vector[7] = {10, 20, 30, 40, 50, 60, 70};
    printf("In�cio - Endere�o do vetor: %p\n", vector);
    
    printVector(vector, 7);
    
    printf("Fim - Endere�o do vetor: %p\n", vector);

    system("pause");
}
