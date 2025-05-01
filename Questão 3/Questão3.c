#include <stdio.h>
#include <locale.h>

int main() {
	// faz a importação da biblioteca responsável por tornar possível a acentuação das palavras da língua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declaração das váriaveis referentes ao preço do produto
	float preco, precofinal;
	// Inserção dos dados dos produtos
	printf("Insira o preço dos produtos:\n");
	scanf("%f", &preco);
	// Cálculo do preço final com 20% de desconto
	precofinal = preco * 0.8;
	// Mostra ao usuário o preço final do produto com 20% de desconto
	printf("O preço com desconto é: %2f\n", precofinal);
}