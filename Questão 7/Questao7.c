#include <stdio.h>
#include <locale.h>

int main() {
	// Importação de biblioteca para tornar possível a acentuação de palavras na língua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declaração das váriaveis utilizadas ao decorrer do código
	int a, b, temporario;
	// Inserção de valores nas váriaveis
	printf("Digite o valor de a: \n");
	scanf("%d", &a);
	printf("Digite o valor de b: \n");
	scanf("%d", &b);
	// Exibe os valores das váriaveis antes da troca dos valores
	printf("O valor antes da troca:\n");
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	// Troca os valores utilizando uma váriavel temporária
	temporario = a;
	a = b;
	b = temporario;
	// Exibe os valores após a troca de valores das váriaveis
	printf("O valor após a troca:\n");
	printf("A = %d\n", a);
	printf("B = %d\n", b);
}