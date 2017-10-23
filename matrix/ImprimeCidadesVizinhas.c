#include<stdio.h>
#include<stdlib.h>

int main() {
   //int size = 5;
   int mat[5][5] = {
       {-1, 30, 25, 20, 20},
       {30, -1, 20, -1, 70},
       {25, 20, -1, 50, -1},
       {20,-1 , 50, -1, -1},
       {20, 70, -1, -1, -1}
   };
   int i;
   int cidade;
   
   scanf("%i",&cidade);
   
   if(cidade < 0 || cidade > 4) {
      printf("A cidade %i não existe no meu mapa.\n", cidade);
   } else {
   
      //navega no grafo/matriz
      for(i = 0; i < 5; i++) {
         if(mat[cidade][i] != -1) {
            printf("%i\n", i);
         }//if
      }//for
   }//else
   system("pause");
}//main
