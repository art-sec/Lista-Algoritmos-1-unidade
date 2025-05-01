#include <stdio.h>
#include <locale.h>

int main() {
	// Importação de biblioteca para permitir acentuação correta
	setlocale(LC_ALL, "Portuguese");
	// Declaração das variáveis utilizadas
	float base, altura, area;
	// Inserção dos valores
	printf("Insira o valor da base do seu triangulo: \n");
	scanf("%f", &base);
	printf("Insira o valor da altura do seu triangulo: \n");
	scanf("%f", &altura);
	// A área é calculada utilizando os válores das váriaveis
	area = (base * altura) / 2;
	// Exibe no terminal do usuário o valor respectivo da área do triângulo
	printf("A área do seu triângulo é: %.2f", area);
}