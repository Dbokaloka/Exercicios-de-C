#include <stdio.h>

int main() {
    float salario;
    float percentualBonus;
    float valorBonus;
    float salarioFinal;

    printf("Digite o salario mensal: R$ ");
    scanf("%f", &salario);

    if (salario < 3000.00) {
        percentualBonus = 10.0;
    } else {
        percentualBonus = 5.0;
    }

    valorBonus = salario * percentualBonus / 100;
    salarioFinal = salario + valorBonus;

    printf("\n========== RESULTADO ==========\n");
    printf("Salario original: R$ %.2f\n", salario);
    printf("Percentual de bonus: %.0f%%\n", percentualBonus);
    printf("Valor do bonus: R$ %.2f\n", valorBonus);
    printf("Salario final: R$ %.2f\n", salarioFinal);
    printf("===============================\n");

    return 0;
}

