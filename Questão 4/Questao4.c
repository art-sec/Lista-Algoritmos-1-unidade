#include <stdio.h>
#include <locale.h>

int main() {
	// Faz a importação da biblioteca responsável por tornar possível a acentuação das palavras da língua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declaração da váriavel de número inteiro utilizada no código
	int numero;
	// Inserção de valores na váriavel
	printf("Insira um número:\n");
	scanf("%d", &numero);
	// Apresentação do valor da váriavel, seu número antecessor e sucessor no terminal do usuário
	printf("O número é: %d, seu antecessor: %d e seu sucessor: %d", numero, numero - 1, numero + 1);
}