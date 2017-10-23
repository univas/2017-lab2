#include<stdio.h>

void imprimirRecursivo(int valor) {
//     printf("Iniciou a função ");
     printf("%i\n", valor);
     valor++;
     if(valor == 6) {
         return;
     }
     imprimirRecursivo(valor);
     printf("%i\n", valor);
//     printf("Terminou a função com valor: %i\n", valor);
}

int main() {
    imprimirRecursivo(1);
    
    system("pause");
}






