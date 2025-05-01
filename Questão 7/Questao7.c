#include <stdio.h>
#include <locale.h>

int main() {
	// Importa��o de biblioteca para tornar poss�vel a acentua��o de palavras na l�ngua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declara��o das v�riaveis utilizadas ao decorrer do c�digo
	int a, b, temporario;
	// Inser��o de valores nas v�riaveis
	printf("Digite o valor de a: \n");
	scanf("%d", &a);
	printf("Digite o valor de b: \n");
	scanf("%d", &b);
	// Exibe os valores das v�riaveis antes da troca dos valores
	printf("O valor antes da troca:\n");
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	// Troca os valores utilizando uma v�riavel tempor�ria
	temporario = a;
	a = b;
	b = temporario;
	// Exibe os valores ap�s a troca de valores das v�riaveis
	printf("O valor ap�s a troca:\n");
	printf("A = %d\n", a);
	printf("B = %d\n", b);
}