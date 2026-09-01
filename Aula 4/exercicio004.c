#include <stdio.h>

int main() {
    float valorConta;
    float percentualDesconto;
    float valorDesconto;
    float valorFinal;

    printf("Digite o valor da conta: R$ ");
    scanf("%f", &valorConta);

    if (valorConta >= 500.00) {
        percentualDesconto = 15.0;
    } else {
        percentualDesconto = 5.0;
    }

    valorDesconto = valorConta * percentualDesconto / 100;
    valorFinal = valorConta - valorDesconto;

    printf("\n========== CUPOM FISCAL ==========\n");
    printf("Valor original: R$ %.2f\n", valorConta);
    printf("Percentual de desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);
    printf("==================================\n");

    return 0;
}