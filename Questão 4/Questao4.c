#include <stdio.h>
#include <locale.h>

int main() {
	// Faz a importa��o da biblioteca respons�vel por tornar poss�vel a acentua��o das palavras da l�ngua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declara��o da v�riavel de n�mero inteiro utilizada no c�digo
	int numero;
	// Inser��o de valores na v�riavel
	printf("Insira um n�mero:\n");
	scanf("%d", &numero);
	// Apresenta��o do valor da v�riavel, seu n�mero antecessor e sucessor no terminal do usu�rio
	printf("O n�mero �: %d, seu antecessor: %d e seu sucessor: %d", numero, numero - 1, numero + 1);
}