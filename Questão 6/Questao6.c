#include <stdio.h>
#include <locale.h>

int main() {
	// Declara��o das v�riaveis utilizadas no c�digo
	float pi, raio;
	// Declara o valor aproximado de pi
	pi = 3.14;
	// Inser��o do valor do raio da circunf�rencia
	printf("Insira o raio da circunf�rencia: \n");
	scanf("%f", &raio);
	// Exibe o valor da circunf�rencia e calcula o valor simultaneamente
	printf("O valor da circunf�rencia �: %2f", pi * 2 * raio);
}