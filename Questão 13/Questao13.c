#include <stdio.h>
#include <locale.h>

int main() {
	// Importa��o de biblioteca para permitir acentua��o correta
	setlocale(LC_ALL, "Portuguese");
	// Declara��o das vari�veis utilizadas
	float base, altura, area;
	// Inser��o dos valores
	printf("Insira o valor da base do seu triangulo: \n");
	scanf("%f", &base);
	printf("Insira o valor da altura do seu triangulo: \n");
	scanf("%f", &altura);
	// A �rea � calculada utilizando os v�lores das v�riaveis
	area = (base * altura) / 2;
	// Exibe no terminal do usu�rio o valor respectivo da �rea do tri�ngulo
	printf("A �rea do seu tri�ngulo �: %.2f", area);
}