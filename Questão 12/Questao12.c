#include <stdio.h>
#include <locale.h>

int main() {
    // Importa��o de biblioteca para permitir acentua��o correta
    setlocale(LC_ALL, "Portuguese");
    // Declara��o das vari�veis utilizadas
    float A, B, C, D;

    // Inser��o dos valores
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);
    printf("Digite o valor de D: ");
    scanf("%f", &D);
    // Realiza as somas e multiplica��es
    printf("\nResultados das somas e multiplica��es:\n");
    printf("A + B = %.2f\tA * B = %.2f\n", A + B, A * B);
    printf("A + C = %.2f\tA * C = %.2f\n", A + C, A * C);
    printf("A + D = %.2f\tA * D = %.2f\n", A + D, A * D);
    printf("B + C = %.2f\tB * C = %.2f\n", B + C, B * C);
    printf("B + D = %.2f\tB * D = %.2f\n", B + D, B * D);
    printf("C + D = %.2f\tC * D = %.2f\n", C + D, C * D);
}