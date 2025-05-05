#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	// Importação de biblioteca para tornar possível a acentuação de palavras na língua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declaração das váriaveis dos dois números inteiros para realizar as operações
	float numero1, numero2;
	// Processo de inserção de valores nas váriaveis inteiras
	printf("Insira o primeiro número: \n");
	scanf("%d", &numero1);
	printf("Insira o segundo número: \n");
	scanf("%d", &numero2);
	// Processo de exibição dos cálculos no console do usuário
	printf("A soma dos dois números é: %d\n", numero1 + numero2);
	printf("A diferença dos dois números é: %d\n", numero1 - numero2);
	printf("O produto dos dois números é: %d\n", numero1 * numero2);
	printf("A divisão dos dois números é: %d\n", numero1 / numero2);
}
