#include <stdio.h>
#include <locale.h>

int main() {
    // Importação de biblioteca para permitir acentuação correta
    setlocale(LC_ALL, "Portuguese");
    // Declaração das variáveis utilizadas
    int percentualDesconto;
    float horasTrabalhadas, valorHoraTrabalhada, salarioBruto, totalDesconto, salarioLiquido;
    // Inserção das horas trabalhadas e valor por hora
    printf("Insira as horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    printf("Insira o valor das horas trabalhadas: ");
    scanf("%f", &valorHoraTrabalhada);
    // Cálculo do salário bruto
    salarioBruto = horasTrabalhadas * valorHoraTrabalhada;
    // Inserção do percentual de desconto
    printf("Insira o percentual de desconto: ");
    scanf("%d", &percentualDesconto);
    // Cálculo do total de desconto e salário líquido
    totalDesconto = salarioBruto * (percentualDesconto / 100.0);
    salarioLiquido = salarioBruto - totalDesconto;
    // Exibição dos resultados
    printf("O salário bruto é: %.2f\n", salarioBruto);
    printf("O total de desconto é: %.2f\n", totalDesconto);
    printf("O salário líquido é: %.2f\n", salarioLiquido);

    return 0;
}