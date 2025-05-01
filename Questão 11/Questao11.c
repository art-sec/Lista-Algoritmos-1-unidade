#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    // Importação de biblioteca para permitir acentuação correta
    setlocale(LC_ALL, "Portuguese");
    // Declaração das variáveis utilizadas
    int a, b, somaQuadrado;
    // Inserção dos valores nas váriaveis
    printf("Insira o valor de A: \n");
    scanf("%d", &a);
    printf("Insira o valor de B: \n");
    scanf("%d", &b);
    // Utiliza a função pow da biblioteca math.h para calcular o quadrado dos inteiros e soma eles
    somaQuadrado = pow(a, 2) + pow(b, 2);
    // Exibe o valor da soma dos quadrados no terminal do usuário
    printf("O valor da soma dos quadrados é:%d \n", somaQuadrado);
}