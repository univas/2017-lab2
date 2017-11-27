#include<stdio.h>

struct Data {
	int dia;
	int mes;
	int ano;
};

struct Pessoa {
	char * nome;//usar este quando for atribuir uma string constante
	//char nome[40]; usar este quando for ler do teclado
	char sexo;
	struct Data nascimento;
	struct Data * casamento;
};

struct Pessoa * lerPessoa() {
    struct Pessoa * ptrPessoa = NULL;//declara uma variável ponteiro para Pessoa
	int tam = sizeof(struct Pessoa);//obtém a qtd de bytes da struct Pessoa
	ptrPessoa = (struct Pessoa *) malloc(tam); //aloca os bytes para uma struct Pessoa
	ptrPessoa->nome = "Roberto";
	ptrPessoa->sexo = 'M';
	ptrPessoa->nascimento.dia = 05;
	ptrPessoa->nascimento.mes = 11;
	ptrPessoa->nascimento.ano = 1979;
	
	//ptrPessoa->casamento->dia = 31;//NÃO PODE AINDA. Porque ainda não alocou struct Data
	
	//alocando uma data para o casamento
	ptrPessoa->casamento = (struct Data *) malloc(sizeof(struct Data));
	ptrPessoa->casamento->dia = 31;
	ptrPessoa->casamento->mes = 01;
	ptrPessoa->casamento->ano = 2014;
	
	return ptrPessoa;
}

void imprimirPessoa(struct Pessoa * alguem) {
    if(alguem != NULL) {
		//imprimir
		printf("%s\n", alguem->nome);
		printf("%c\n", alguem->sexo);
		printf("%i/%i/%i\n", 
							alguem->nascimento.dia,
							alguem->nascimento.mes,
							alguem->nascimento.ano);
		if(alguem->casamento != NULL) {
			printf("%i/%i/%i\n", 
							alguem->casamento->dia,
							alguem->casamento->mes,
							alguem->casamento->ano);
		} else {
			printf("O sujeito ainda não casou.\n");
		}
	} else {
		printf("Não é possível imprimir a pessoa\n");
	}
}

int main() {
	struct Pessoa * individuo = NULL;
	individuo = lerPessoa();
	imprimirPessoa(individuo);
	
	system("pause");
}
