#include<stdio.h>

int tamanho(char * pMsg) {
    int count = 0;
    
    while(*pMsg != '\0') {
        printf("%c\n", *pMsg);
        count++;
        pMsg++;
    }


    return count;
}

int main() {
    char vet[] = "Roberto";
    int qtd = tamanho(vet);
    printf("Tamanho: %i\n", qtd);
    
    system("pause");   
}
