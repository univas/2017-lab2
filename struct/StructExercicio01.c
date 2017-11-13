#include<stdio.h>

struct horaMinuto {
    int hora;
    int minuto;
};

int duracao (struct horaMinuto inicio, struct horaMinuto fim) {
	//TODO: implementar a função
	
	return (fim.hora - inicio.hora) * 60 + (fim.minuto - inico.minuto);
}

int main() {
	struct horaMinuto inicio;
	struct horaMinuto fim;
	
	inicio.hora = 10;
	inicio.minuto = 15;
	
	fim.hora = 11;
	fim.minuto = 40;
	
	int tempoDuracao = duracao(inicio, fim);
	printf("Duração do evento: %i\n", tempoDuracao);
	
}






