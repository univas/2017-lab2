#include<stdio.h>
#include<stdlib.h>

int main() {
   int size = 3;
   int mat[size][size];
   int i;
   int j;
   
   //lê a matriz do teclado
   for(i = 0; i < size; i++) { //caminha nas linha
      for(j = 0; j < size; j++) { //caminha nas colunas
         scanf("%i", &mat[i][j]);
      }
   }
   printf("Imprimindo a matriz %iX%i\n", size, size);
   //imprime a matriz na tela
   for(i = 0; i < size; i++) { //caminha nas linha
      
      for(j = 0; j < size; j++) { //caminha nas colunas
         printf("%i ", mat[i][j]);
      }
      printf("\n");
   }
   
   //exercício: imprimir diagonal principal com apenas 1 for.
   printf("Diagonal principal: \n");
   for(i = 0; i < size; i++) {
         printf("%i ", mat[i][i]);
   }
   
   system("pause");
}
