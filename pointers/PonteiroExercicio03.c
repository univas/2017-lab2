#include<stdio.h>

void copiarVetor(char * str1, char * str2) {
   
    while(*str1 != '\0') {//enquanto n�o chega no fim de str1
        printf("%c\n", *str1);
        *str2 = *str1;
        str1++;
        str2++;
    }
    *str2 = '\0';
}

int main() {
    char vet1[] = "Roberto";
    char vet2[15] = "aaaaaaaaaaaaaaaaa";
    copiarVetor(vet1, vet2);
    printf("Conte�do do vet2: %s\n", vet2);
    
    system("pause");   
}
