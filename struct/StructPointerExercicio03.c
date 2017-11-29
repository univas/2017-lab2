#include<stdio.h>

typedef struct horaMinuto {
	int hora;
	int minuto;
} HoraMinuto;

int duracao (HoraMinuto * inicio, HoraMinuto * fim) {
	return (fim->hora * 60 + fim->minuto) - (inicio->hora * 60 + inicio->minuto);
}

HoraMinuto * lerMomentoEvento() {
	HoraMinuto * ptr = (HoraMinuto *) malloc(sizeof(HoraMinuto));
	
	scanf("%i", &ptr->hora);
	scanf("%i", &ptr->minuto);

	return ptr;
}

int main() {
    HoraMinuto * ptrInicio;
    HoraMinuto * ptrFim;
    
    printf("Digite hora e minuto de início: ");
	ptrInicio = lerMomentoEvento();
    printf("Digite hora e minuto de fim: ");
	ptrFim = lerMomentoEvento();

	int duracaoEvento = duracao(ptrInicio, ptrFim);
	printf("Duração do evento: %i minutos\n", duracaoEvento);
	
	free(ptrInicio);
	free(ptrFim);
	
	system("pause");
}
