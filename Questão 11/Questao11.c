#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    // Importa��o de biblioteca para permitir acentua��o correta
    setlocale(LC_ALL, "Portuguese");
    // Declara��o das vari�veis utilizadas
    int a, b, somaQuadrado;
    // Inser��o dos valores nas v�riaveis
    printf("Insira o valor de A: \n");
    scanf("%d", &a);
    printf("Insira o valor de B: \n");
    scanf("%d", &b);
    // Utiliza a fun��o pow da biblioteca math.h para calcular o quadrado dos inteiros e soma eles
    somaQuadrado = pow(a, 2) + pow(b, 2);
    // Exibe o valor da soma dos quadrados no terminal do usu�rio
    printf("O valor da soma dos quadrados �:%d \n", somaQuadrado);
}