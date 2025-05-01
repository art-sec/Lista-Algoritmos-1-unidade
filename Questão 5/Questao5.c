#include <stdio.h>
#include <locale.h>

int main() {
	// Faz a importação da biblioteca responsável por tornar possível a acentuação das palavras da língua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declaração das váriaveis utilizadas ao decorrer do código
	int horas, minutos, horasParaMinutos;
	// Inseção da quantidade de horas
	printf("Insira a quantidade de horas: \n");
	scanf("%d", &horas);
	// Conversão da quantidade de horas para minutos
	horasParaMinutos = horas * 60;
	// Inserção da quantidade de minutos no código
	printf("Insira a quantidade de minutos: \n");
	scanf("%d", &minutos);
	// Exibição no console do usuário a quantidade total de minutos
	printf("A quantidade total de minutos é: %d \n", horasParaMinutos + minutos)
}