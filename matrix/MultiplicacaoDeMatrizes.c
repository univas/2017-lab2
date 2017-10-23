#include<stdio.h>
#include<stdlib.h>

int main() {
   int i;//coluna de A; linha de B
   int j;//linha de A;  linha de R
   int k;//coluna de B; coluna de R 
   int matA[3][2] = {{2, 3},{4, 5},{6, 7}};
   int matB[2][2] = {{10, 20},{30, 40}};
   int matR[3][2];
   
   for(j = 0; j < 3; j++) {
      for(k = 0; k < 2; k++) {
         int soma = 0;
         for(i = 0; i < 2; i++) {
//            printf("%i ", matA[j][i] * matB[i][k]);
            soma += matA[j][i] * matB[i][k];
         }
         matR[j][k] = soma;
      }
   }
   
   //agora só falta imprimir a matriz R
   for(j = 0; j < 3; j++) {
      for(k = 0; k < 2; k++) {
            printf("%i ", matR[j][k]);
      }
      printf("\n");
   }
   system("pause");
}
