#include<stdio.h>
#include<stdlib.h>

int main() {
   int mat[6][6] = {
       {1,   2,  3,  4,  5,  6},
       {11, 12, 13, 14, 15, 16},
       {21, 22, 23, 24, 25, 26},
       {31, 32, 33, 34, 35, 36},
       {41, 42, 43, 44, 45, 46},
       {51, 52, 53, 54, 55, 56}
   };
   int linInicial, linFinal;
   int colInicial, colFinal;
   int i, j;
   
   //lê os índices limítrofes da submatriz
   scanf("%i %i %i %i", 
         &linInicial, &linFinal, &colInicial, &colFinal);
   
   //imprime a submatriz
   for(i = ???; i <= ???; i++) {
      for(j = ???; j <= ???; j++) {
         printf("%i ", mat[i][j]);
      }
      printf("\n");
   }
   system("pause");
}
