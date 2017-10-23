#include<stdio.h>
#include<stdlib.h>

//imprime todos os números entre o valor de início e valor de fim
void imprimirIntervalo(int inicio, int fim) {
   int i;
   for(i = inicio; i <= fim; i++) {
      printf("%i ", i);
   }
   printf("\n");
}

int main () {
    imprimirIntervalo(7, 23);
    system("pause");   
}
