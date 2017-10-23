#include<stdio.h>
#include<stdlib.h>


int main() {
   int linhas = 3;
   int colunas = 50;
   char frase[linhas][colunas];
   
   gets(frase[0]);
   //scanf("%s", frase[0]);
   
   printf("Você digitou: %s\n", frase[0]);
   system("pause");
}
