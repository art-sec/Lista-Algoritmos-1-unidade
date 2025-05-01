#include <stdio.h>
#include <locale.h>

int main() {
	// Importação de biblioteca para tornar possível a acentuação de palavras na língua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declaração das váriaveis utilizadas ao decorrer do código
	char nome[50], sobrenome[50];
	// Inserção de valores nas váriaveis
	printf("Insira o nome: \n");
	scanf("%s", &nome);
	printf("Insira o sobrenome: \n");
	scanf("%s", &sobrenome);
	// Exibe o nome completo no terminal do usuário
	printf("Nome completo: %s %s\n", nome, sobrenome);
}