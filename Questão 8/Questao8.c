#include <stdio.h>
#include <locale.h>

int main() {
	// Importa��o de biblioteca para tornar poss�vel a acentua��o de palavras na l�ngua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declara��o das v�riaveis utilizadas ao decorrer do c�digo
	char nome[50], sobrenome[50];
	// Inser��o de valores nas v�riaveis
	printf("Insira o nome: \n");
	scanf("%s", &nome);
	printf("Insira o sobrenome: \n");
	scanf("%s", &sobrenome);
	// Exibe o nome completo no terminal do usu�rio
	printf("Nome completo: %s %s\n", nome, sobrenome);
}