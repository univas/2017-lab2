#include<stdio.h>
#include<stdlib.h>

int fatorial(int n) {
    if( n == 0 || n == 1 ) {
        return 1;
    }
    //antes
    //return n * fatorial(n - 1);
    //depois
    int nMenosUm = n - 1;
    int resposta = fatorial(nMenosUm);
    int resultado = n * resposta;
    return resultado;
}

int main() {
    //int i;
    printf("Fatorial de %i: %i\n", 7, fatorial(7));
    //for(i =0; i <= 10; i++) {
    //    printf("Fatorial de %i: %i\n", i, fatorial(i));
    //}
    system("pause");
}
