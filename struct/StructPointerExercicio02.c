#include<stdio.h>
typedef struct horaMinuto {
	int hora;
	int minuto;
} HoraMinuto;

int duracao (HoraMinuto * inicio, HoraMinuto * fim) {
	return (fim->hora * 60 + fim->minuto) - (inicio->hora * 60 + inicio->minuto);
}

int main() {
	HoraMinuto inicioEvento;
	HoraMinuto fimEvento;
	
	inicioEvento.hora = 6;
	inicioEvento.minuto = 10;
	fimEvento.hora = 7;
	fimEvento.minuto = 20;
	
	int duracaoEvento = duracao(&inicioEvento, &fimEvento);
	
	printf("Durção do evento: %i minutos\n", duracaoEvento);
	system("pause");
}
