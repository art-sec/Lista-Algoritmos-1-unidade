#include <stdio.h>
#include <locale.h>

int main() {
	// Faz a importa��o da biblioteca respons�vel por tornar poss�vel a acentua��o das palavras da l�ngua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declara��o das v�riaveis utilizadas ao decorrer do c�digo
	int horas, minutos, horasParaMinutos;
	// Inse��o da quantidade de horas
	printf("Insira a quantidade de horas: \n");
	scanf("%d", &horas);
	// Convers�o da quantidade de horas para minutos
	horasParaMinutos = horas * 60;
	// Inser��o da quantidade de minutos no c�digo
	printf("Insira a quantidade de minutos: \n");
	scanf("%d", &minutos);
	// Exibi��o no console do usu�rio a quantidade total de minutos
	printf("A quantidade total de minutos �: %d \n", horasParaMinutos + minutos)
}