#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	// Importação de biblioteca para tornar possível a acentuação de palavras na língua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declaração das váriaveis de nome, número e nascimento necessárias para continuar com o programa
	char nome[50];
	int nascimento, idade;
	// Processo de inserção de valores nas váriaveis
	printf("Insira seu nome: \n");
	scanf("%s", nome);
	printf("Insira sua ano de nascimento: \n");
	scanf("%d", &nascimento);
	// Processo de exibição do nome e idade do usuário no terminal
	printf("Seu nome é: %s , e sua idade: %d", nome, 2025 - nascimento);
}