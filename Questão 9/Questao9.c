#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	// Importa��o de biblioteca para tornar poss�vel a acentua��o de palavras na l�ngua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declara��o das v�riavel utilizada ao decorrer do c�digo
	int numero;
	// Inser��o de valor nas v�riavel
	printf("Insira o valor do n�mero:");
	scanf("%d", &numero);
	// Exibe o quadrado e o cubo do n�mero apresentado
	printf("O quadrado do n�mero: %d, o cubo do n�mero: %d", numero * numero, numero * numero * numero);
}