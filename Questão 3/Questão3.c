#include <stdio.h>
#include <locale.h>

int main() {
	// faz a importa��o da biblioteca respons�vel por tornar poss�vel a acentua��o das palavras da l�ngua portuguesa
	setlocale(LC_ALL, "portuguese");
	// Declara��o das v�riaveis referentes ao pre�o do produto
	float preco, precofinal;
	// Inser��o dos dados dos produtos
	printf("Insira o pre�o dos produtos:\n");
	scanf("%f", &preco);
	// C�lculo do pre�o final com 20% de desconto
	precofinal = preco * 0.8;
	// Mostra ao usu�rio o pre�o final do produto com 20% de desconto
	printf("O pre�o com desconto �: %2f\n", precofinal);
}