#include<stdio.h>
#include<stdlib.h>

int main() {
   int size = 3;
   int matA[size][size];
   int matB[size][size];
   int matResultado[size][size];
   int i;
   int j;
   
   //lê a matriz A do teclado
   for(i = 0; i < size; i++) { //caminha nas linha
      for(j = 0; j < size; j++) { //caminha nas colunas
         scanf("%i", &matA[i][j]);
      }
   }

   //lê a matriz B do teclado
   for(i = 0; i < size; i++) { //caminha nas linha
      for(j = 0; j < size; j++) { //caminha nas colunas
         scanf("%i", &matB[i][j]);
      }
   }
   
   //cálculo da soma
   for(i = 0; i < size; i++) {
      for(j = 0; j < size; j++) {
         matResultado[i][j] = matA[i][j] + matB[i][j];
      }
   }
   
   //imprimir a matriz resultado - cálculo da soma
   printf("Matriz resultado da soma: \n");
   for(i = 0; i < size; i++) {
      for(j = 0; j < size; j++) {
         printf("%i ", matResultado[i][j]);
      }
      printf("\n");
   }  
   system("pause");
}
