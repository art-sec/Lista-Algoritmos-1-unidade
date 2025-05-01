#include <stdio.h>
#include <locale.h>

int main() {
    // Importa��o de biblioteca para permitir acentua��o correta
    setlocale(LC_ALL, "Portuguese");
    // Declara��o das vari�veis utilizadas
    int percentualDesconto;
    float horasTrabalhadas, valorHoraTrabalhada, salarioBruto, totalDesconto, salarioLiquido;
    // Inser��o das horas trabalhadas e valor por hora
    printf("Insira as horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);
    printf("Insira o valor das horas trabalhadas: ");
    scanf("%f", &valorHoraTrabalhada);
    // C�lculo do sal�rio bruto
    salarioBruto = horasTrabalhadas * valorHoraTrabalhada;
    // Inser��o do percentual de desconto
    printf("Insira o percentual de desconto: ");
    scanf("%d", &percentualDesconto);
    // C�lculo do total de desconto e sal�rio l�quido
    totalDesconto = salarioBruto * (percentualDesconto / 100.0);
    salarioLiquido = salarioBruto - totalDesconto;
    // Exibi��o dos resultados
    printf("O sal�rio bruto �: %.2f\n", salarioBruto);
    printf("O total de desconto �: %.2f\n", totalDesconto);
    printf("O sal�rio l�quido �: %.2f\n", salarioLiquido);

    return 0;
}