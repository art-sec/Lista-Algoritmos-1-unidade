#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	// Importação de biblioteca para tornar possível a acentuação de palavras na língua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declaração das váriavel utilizada ao decorrer do código
	int numero;
	// Inserção de valor nas váriavel
	printf("Insira o valor do número:");
	scanf("%d", &numero);
	// Exibe o quadrado e o cubo do número apresentado
	printf("O quadrado do número: %d, o cubo do número: %d", numero * numero, numero * numero * numero);
}