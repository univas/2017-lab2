#include <stdio.h>
struct pessoa {
       int peso;
       int altura;
};
struct cliente {
       struct pessoa pf;
       int sexo;
};
struct fornecedor {
       struct pessoa * pj;
       int idade;
};

int main () {
    struct fornecedor forn;
    struct fornecedor * pForn;
    struct cliente vet[3];
    struct cliente * pCli;
    
    vet[0].sexo = 1;
    vet[0].pf.altura = 2;
    
    pCli = vet;//pCli aponta para o primeiro elemento do vetor
    pCli++;//pCli aponta para o segundo
    pCli->pf.idade = 20;
    
    pForn = &forn;
    //criar uma pessoa para colocar seu ponteiro dentro de pj
    struct pessoa pessoaJuridica;
    pForn->pj = &pessoaJuridica;
    pForn->pj->peso = 40;
    
    system("pause");
}












