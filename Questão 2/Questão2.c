#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	// Importa��o de biblioteca para tornar poss�vel a acentua��o de palavras na l�ngua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declara��o das v�riaveis de nome, n�mero e nascimento necess�rias para continuar com o programa
	char nome[50];
	int nascimento, idade;
	// Processo de inser��o de valores nas v�riaveis
	printf("Insira seu nome: \n");
	scanf("%s", nome);
	printf("Insira sua ano de nascimento: \n");
	scanf("%d", &nascimento);
	// Processo de exibi��o do nome e idade do usu�rio no terminal
	printf("Seu nome �: %s , e sua idade: %d", nome, 2025 - nascimento);
}