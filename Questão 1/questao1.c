#include <stdio.h>
#include <locale.h>

int main() {
	// Importa��o de biblioteca para tornar poss�vel a acentua��o de palavras na l�ngua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declara��o das v�riaveis dos dois n�meros inteiros para realizar as opera��es
	int numero1, numero2;
	// Processo de inser��o de valores nas v�riaveis inteiras
	printf("Insira o primeiro n�mero: \n");
	scanf("%d", &numero1);
	printf("Insira o segundo n�mero: \n");
	scanf("%d", &numero2);
	// Processo de exibi��o dos c�lculos no console do usu�rio
	printf("A soma dos dois n�meros �: %d\n", numero1 + numero2);
	printf("A diferen�a dos dois n�meros �: %d\n", numero1 - numero2);
	printf("O produto dos dois n�meros �: %d\n", numero1 * numero2);
	printf("A divis�o dos dois n�meros �: %d\n", numero1 / numero2);
}