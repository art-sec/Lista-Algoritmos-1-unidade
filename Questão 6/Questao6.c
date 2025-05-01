#include <stdio.h>
#include <locale.h>

int main() {
	// Declaração das váriaveis utilizadas no código
	float pi, raio;
	// Declara o valor aproximado de pi
	pi = 3.14;
	// Inserção do valor do raio da circunfêrencia
	printf("Insira o raio da circunfêrencia: \n");
	scanf("%f", &raio);
	// Exibe o valor da circunfêrencia e calcula o valor simultaneamente
	printf("O valor da circunfêrencia é: %.2f", pi * 2 * raio);
}
